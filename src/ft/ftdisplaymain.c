#include <ft/fighter.h>
#include <if/interface.h>
#include <cm/camera.h>
#include <sc/scene.h>
#include <sys/malloc.h>
#include <sys/hal_gu.h>
#include <sys/develop.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern syMallocRegion gSYTaskmanGraphicsHeap;

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x801312F0
u8 sFTDisplayMainSkyFogAlpha;

// 0x801312F1
ub8 sFTDisplayMainIsShadeFog;

// 0x801312F4
syColorRGBA sFTDisplayMainFogColor;

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x8012B930
Vec2f dFTDisplayMainShufflePositions[/* */][4] = 
{
    // Non-electric
    { 
        {   0.0F, -100.0F }, 
        {   0.0F,  -50.0F },
        {   0.0F,  100.0F }, 
        {   0.0F,   50.0F } 
    },

    // Electric
    { 
        {   0.0F,  -20.0F }, 
        {  15.0F,    5.0F },
        { -15.0F,    5.0F }, 
        {   0.0F,    0.0F } 
    }
};

// 0x8012B970
s32 dFTDisplayMainPad0x8012B970[2] = { 0, 0 };

/* 0x8012B978 - use xxd -i in Linux to convert your collision box texture into an unsigned char[] array;
 * I went out of my way to convert them into unsigned short[] instead, but as long as the bytes match,
 * it doesn't really matter what the datatype is, as the gbi macro doesn't care.
 */
u16 dFTDisplayMainCollisionTexture[/* */] = 
{
    #include <ft/ftcollision.txt>
};

// 0x8012BB78
Vtx_tn dFTDisplayMainCollisionCuboidVtx[/* */] =
{
    { { -15, 15, 15 }, 0, { -16, 512 }, { 0, 0, 127 }, 0xFF },
    { { -15, -15, 15 }, 0, { -16, -16 }, { 0, 0, 127 }, 0xFF },
    { { 15, -15, 15 }, 0, { 512, -16 }, { 0, 0, 127 }, 0xFF },
    { { 15, 15, 15 }, 0, { 512, 512 }, { 0, 0, 127 }, 0xFF },
    { { -15, 15, -15 }, 0, { -16, 512 }, { 0, 127, 0 }, 0xFF },
    { { -15, 15, 15 }, 0, { -16, -16 }, { 0, 127, 0 }, 0xFF },
    { { 15, 15, 15 }, 0, { 512, -16 }, { 0, 127, 0 }, 0xFF },
    { { 15, 15, -15 }, 0, { 512, 512 }, { 0, 127, 0 }, 0xFF },
    { { -15, -15, -15 }, 0, { -16, 512 }, { 0, 0, -127 }, 0xFF },
    { { -15, 15, -15 }, 0, { -16, -16 }, { 0, 0, -127 }, 0xFF },
    { { 15, 15, -15 }, 0, { 512, -16 }, { 0, 0, -127 }, 0xFF },
    { { 15, -15, -15 }, 0, { 512, 512 }, { 0, 0, -127 }, 0xFF },
    { { -15, -15, 15 }, 0, { -16, 512 }, { 0, -127, 0 }, 0xFF },
    { { -15, -15, -15 }, 0, { -16, -16 }, { 0, -127, 0 }, 0xFF },
    { { 15, -15, -15 }, 0, { 512, -16 }, { 0, -127, 0 }, 0xFF },
    { { 15, -15, 15 }, 0, { 512, 512 }, { 0, -127, 0 }, 0xFF },
    { { 15, 15, 15 }, 0, { -16, 512 }, { 127, 0, 0 }, 0xFF },
    { { 15, -15, 15 }, 0, { -16, -16 }, { 127, 0, 0 }, 0xFF },
    { { 15, -15, -15 }, 0, { 512, -16 }, { 127, 0, 0 }, 0xFF },
    { { 15, 15, -15 }, 0, { 512, 512 }, { 127, 0, 0 }, 0xFF },
    { { -15, 15, -15 }, 0, { -16, 512 }, { -128, 0, 0 }, 0xFF },
    { { -15, -15, -15 }, 0, { -16, -16 }, { -128, 0, 0 }, 0xFF },
    { { -15, -15, 15 }, 0, { 512, -16 }, { -128, 0, 0 }, 0xFF },
    { { -15, 15, 15 }, 0, { 512, 512 }, { -128, 0, 0 }, 0xFF }
};

// 0x8012BCF8
Vtx_t dFTDisplayMainCollisionEdgeVtx[/* */] = 
{ 
    { { -15, 15, 15 }, 0, { -16, -16 }, { 0xFF, 0xFF, 0xFF, 0xFF } },
    { { -15, -15, 15 }, 0, { -16, 512 }, { 0xFF, 0xFF, 0xFF, 0xFF } },
    { { 15, -15, 15 }, 0, { 512, 512 }, { 0xFF, 0xFF, 0xFF, 0xFF } },
    { { 15, 15, 15 }, 0, { 512, -16 }, { 0xFF, 0xFF, 0xFF, 0xFF } },
    { { -15, 15, -15 }, 0, { 512, 512 }, { 0xFF, 0xFF, 0xFF, 0xFF } },
    { { -15, 15, 15 }, 0, { 512, -16 }, { 0xFF, 0xFF, 0xFF, 0xFF } },
    { { 15, 15, 15 }, 0, { -16, -16 }, { 0xFF, 0xFF, 0xFF, 0xFF } },
    { { 15, 15, -15 }, 0, { -16, 512 }, { 0xFF, 0xFF, 0xFF, 0xFF } },
    { { -15, -15, -15 }, 0, { -16, -16 }, { 0xFF, 0xFF, 0xFF, 0xFF } },
    { { -15, 15, -15 }, 0, { -16, 512 }, { 0xFF, 0xFF, 0xFF, 0xFF } },
    { { 15, 15, -15 }, 0, { 512, 512 }, { 0xFF, 0xFF, 0xFF, 0xFF } },
    { { 15, -15, -15 }, 0, { 512, -16 }, { 0xFF, 0xFF, 0xFF, 0xFF } },
    { { -15, -15, 15 }, 0, { 512, 512 }, { 0xFF, 0xFF, 0xFF, 0xFF } },
    { { -15, -15, -15 }, 0, { 512, -16 }, { 0xFF, 0xFF, 0xFF, 0xFF } },
    { { 15, -15, -15 }, 0, { -16, -16 }, { 0xFF, 0xFF, 0xFF, 0xFF } },
    { { 15, -15, 15 }, 0, { -16, 512 }, { 0xFF, 0xFF, 0xFF, 0xFF } },
    { { 15, 15, 15 }, 0, { 512, 512 }, { 0xFF, 0xFF, 0xFF, 0xFF } },
    { { 15, -15, 15 }, 0, { 512, -16 }, { 0xFF, 0xFF, 0xFF, 0xFF } },
    { { 15, -15, -15 }, 0, { -16, -16 }, { 0xFF, 0xFF, 0xFF, 0xFF } },
    { { 15, 15, -15 }, 0, { -16, 512 }, { 0xFF, 0xFF, 0xFF, 0xFF } },
    { { -15, 15, -15 }, 0, { 512, 512 }, { 0xFF, 0xFF, 0xFF, 0xFF } },
    { { -15, -15, -15 }, 0, { 512, -16 }, { 0xFF, 0xFF, 0xFF, 0xFF } },
    { { -15, -15, 15 }, 0, { -16, -16 }, { 0xFF, 0xFF, 0xFF, 0xFF } },
    { { -15, 15, 15 }, 0, { -16, 512 }, { 0xFF, 0xFF, 0xFF, 0xFF } }
};

// 0x8012BE78
Vtx_t dFTDisplayMainCollisionCubeCommonVtx0[/* */] = 
{
    { { -15, 15, 15 }, 0, { -16, 512 }, { 0xFF, 0xFF, 0xFF, 0xFF } },
    { { -15, -15, 15 }, 0, { -16, -16 }, { 0xFF, 0xFF, 0xFF, 0xFF } },
    { { 15, -15, 15 }, 0, { 512, -16 }, { 0xFF, 0xFF, 0xFF, 0xFF } },
    { { 15, 15, 15 }, 0, { 512, 512 }, { 0xFF, 0xFF, 0xFF, 0xFF } }
};

// 0x8012BEB8
Vtx_t dFTDisplayMainCollisionCubeCommonVtx1[/* */] = 
{ 
    { { -15, 15, -15 }, 0, { -16, 512 }, { 0xFF, 0xFF, 0xFF, 0xFF } },
    { { -15, 15, 15 }, 0, { -16, -16 }, { 0xFF, 0xFF, 0xFF, 0xFF } },
    { { 15, 15, 15 }, 0, { 512, -16 }, { 0xFF, 0xFF, 0xFF, 0xFF } },
    { { 15, 15, -15 }, 0, { 512, 512 }, { 0xFF, 0xFF, 0xFF, 0xFF } }
};

// 0x8012BEF8
Vtx_t dFTDisplayMainCollisionCubeCommonVtx2[/* */] =
{ 
    { { -15, -15, -15 }, 0, { -16, 512 }, { 0xFF, 0xFF, 0xFF, 0xFF } },
    { { -15, 15, -15 }, 0, { -16, -16 }, { 0xFF, 0xFF, 0xFF, 0xFF } },
    { { 15, 15, -15 }, 0, { 512, -16 }, { 0xFF, 0xFF, 0xFF, 0xFF } },
    { { 15, -15, -15 }, 0, { 512, 512 }, { 0xFF, 0xFF, 0xFF, 0xFF } }
};

// 0x8012BF38
Vtx_t dFTDisplayMainCollisionCubeCommonVtx3[/* */] = 
{
    { { -15, -15, 15 }, 0, { -16, 512 }, { 0xFF, 0xFF, 0xFF, 0xFF } },
    { { -15, -15, -15 }, 0, { -16, -16 }, { 0xFF, 0xFF, 0xFF, 0xFF } },
    { { 15, -15, -15 }, 0, { 512, -16 }, { 0xFF, 0xFF, 0xFF, 0xFF } },
    { { 15, -15, 15 }, 0, { 512, 512 }, { 0xFF, 0xFF, 0xFF, 0xFF } }
};

// 0x8012BF78
Vtx_t dFTDisplayMainCollisionCubeCommonVtx4[/* */] = 
{
    { { 15, 15, 15 }, 0, { -16, 512 }, { 0xFF, 0xFF, 0xFF, 0xFF } },
    { { 15, -15, 15 }, 0, { -16, -16 }, { 0xFF, 0xFF, 0xFF, 0xFF } },
    { { 15, -15, -15 }, 0, { 512, -16 }, { 0xFF, 0xFF, 0xFF, 0xFF } },
    { { 15, 15, -15 }, 0, { 512, 512 }, { 0xFF, 0xFF, 0xFF, 0xFF } }
};

// 0x8012BFB8
Vtx_t dFTDisplayMainCollisionCubeCommonVtx5[/* */] = 
{
    { { -15, 15, -15 }, 0, { -16, 512 }, { 0xFF, 0xFF, 0xFF, 0xFF } },
    { { -15, -15, -15 }, 0, { -16, -16 }, { 0xFF, 0xFF, 0xFF, 0xFF } },
    { { -15, -15, 15 }, 0, { 512, -16 }, { 0xFF, 0xFF, 0xFF, 0xFF } },
    { { -15, 15, 15 }, 0, { 512, 512 }, { 0xFF, 0xFF, 0xFF, 0xFF } }
};

// 0x8012BFF8
Vtx_t dFTDisplayMainMapCollisionBottomVtx[/* */] = 
{
    { { -30, 30, 0 }, 0, { -16, -16 }, { 0xFF, 0xFF, 0xFF, 0xFF } },
    { { 0, 0, 0 }, 0, { 512, -16 }, { 0xFF, 0xFF, 0xFF, 0xFF } },
    { { 30, 30, 0 }, 0, { 512, 512 }, { 0xFF, 0xFF, 0xFF, 0xFF } }
};

// 0x8012C028
Vtx_t dFTDisplayMainMapCollisionTopVtx[/* */] =
{
    { { -30, 0, 0 }, 0, { -16, -16 }, { 0xFF, 0xFF, 0xFF, 0xFF } },
    { { 30, 0, 0 }, 0, { 512, 512 }, { 0xFF, 0xFF, 0xFF, 0xFF } },
    { { 0, 30, 0 }, 0, { -16, 512 }, { 0xFF, 0xFF, 0xFF, 0xFF } }
};

// 0x8012C058
Gfx dFTDisplayMainHurtCollisionCuboidDL[/* */] =
{
    gsDPPipeSync(),
    gsDPSetCycleType(G_CYC_2CYCLE),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_OPA_SURF2),
    gsSPLightColor(LIGHT_1, GPACK_RGBA8888(0x40, 0x40, 0x40, 0x00)),
    gsSPLightColor(LIGHT_2, GPACK_RGBA8888(0xC0, 0xC0, 0xC0, 0x00)),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_16b, 1, dFTDisplayMainCollisionTexture),
    gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_16b, 0, 0x0000, G_TX_LOADTILE, 0, G_TX_NOMIRROR | G_TX_WRAP, 4, G_TX_NOLOD, G_TX_NOMIRROR | G_TX_WRAP, 4, G_TX_NOLOD),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 255, 512),
    gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_16b, 4, 0x0000, G_TX_RENDERTILE, 0, G_TX_NOMIRROR | G_TX_CLAMP, 4, G_TX_NOLOD, G_TX_NOMIRROR | G_TX_CLAMP, 4, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsSPVertex(dFTDisplayMainCollisionCuboidVtx, ARRAY_COUNT(dFTDisplayMainCollisionCuboidVtx), 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 4, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 8, 10, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 12, 14, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 16, 18, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 20, 22, 0),
    gsDPPipeSync(),
    gsDPSetCycleType(G_CYC_1CYCLE),
    gsDPSetRenderMode(G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2),
    gsSPEndDisplayList()
};

// 0x8012C128
Gfx dFTDisplayMainHitCollisionEdgeDL[/* */] =
{
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
    gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK),
    gsSPVertex(dFTDisplayMainCollisionEdgeVtx, ARRAY_COUNT(dFTDisplayMainCollisionEdgeVtx), 0),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_LIGHTING | G_SHADING_SMOOTH),
    gsSPEndDisplayList()
};

// 0x8012C160
Gfx dFTDisplayMainHitCollisionBlendDL[/* */] =
{
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
    gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK),
    gsDPSetCombineMode(G_CC_BLENDPEDECALA, G_CC_BLENDPEDECALA),
    gsDPSetRenderMode(G_RM_AA_ZB_TEX_EDGE, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetAlphaCompare(G_AC_THRESHOLD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_16b, 1, dFTDisplayMainCollisionTexture),
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
    gsSPVertex(dFTDisplayMainCollisionCubeCommonVtx0, ARRAY_COUNT(dFTDisplayMainCollisionCubeCommonVtx0), 24),
    gsSP2Triangles(0, 24, 27, 0, 3, 0, 27, 0),
    gsSP2Triangles(1, 25, 26, 0, 2, 1, 26, 0),
    gsSP2Triangles(27, 24, 0, 0, 27, 0, 3, 0),
    gsSP2Triangles(26, 25, 1, 0, 26, 1, 2, 0),
    gsSPVertex(dFTDisplayMainCollisionCubeCommonVtx1, ARRAY_COUNT(dFTDisplayMainCollisionCubeCommonVtx1), 24),
    gsSP2Triangles(5, 25, 24, 0, 4, 5, 24, 0),
    gsSP2Triangles(6, 26, 27, 0, 7, 6, 27, 0),
    gsSP2Triangles(24, 25, 5, 0, 24, 5, 4, 0),
    gsSP2Triangles(27, 26, 6, 0, 27, 6, 7, 0),
    gsSPVertex(dFTDisplayMainCollisionCubeCommonVtx2, ARRAY_COUNT(dFTDisplayMainCollisionCubeCommonVtx2), 24),
    gsSP2Triangles(8, 24, 27, 0, 11, 8, 27, 0),
    gsSP2Triangles(9, 25, 26, 0, 10, 9, 26, 0),
    gsSP2Triangles(27, 24, 8, 0, 27, 8, 11, 0),
    gsSP2Triangles(26, 25, 9, 0, 26, 9, 10, 0),
    gsSPVertex(dFTDisplayMainCollisionCubeCommonVtx3, ARRAY_COUNT(dFTDisplayMainCollisionCubeCommonVtx3), 24),
    gsSP2Triangles(13, 25, 24, 0, 12, 13, 24, 0),
    gsSP2Triangles(14, 26, 27, 0, 15, 14, 27, 0),
    gsSP2Triangles(24, 25, 13, 0, 24, 13, 12, 0),
    gsSP2Triangles(27, 26, 14, 0, 27, 14, 15, 0),
    gsSPVertex(dFTDisplayMainCollisionCubeCommonVtx4, ARRAY_COUNT(dFTDisplayMainCollisionCubeCommonVtx4), 24),
    gsSP2Triangles(17, 25, 24, 0, 16, 17, 24, 0),
    gsSP2Triangles(18, 26, 27, 0, 19, 18, 27, 0),
    gsSP2Triangles(24, 25, 17, 0, 24, 17, 16, 0),
    gsSP2Triangles(27, 26, 18, 0, 27, 18, 19, 0),
    gsSPVertex(dFTDisplayMainCollisionCubeCommonVtx5, ARRAY_COUNT(dFTDisplayMainCollisionCubeCommonVtx5), 24),
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

// 0x8012C310
Gfx dFTDisplayMainHitCollisionCubeDL[/* */] =
{
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
    gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK),
    gsDPSetCombineMode(G_CC_BLENDPEDECALA, G_CC_BLENDPEDECALA),
    gsDPSetRenderMode(G_RM_AA_ZB_TEX_EDGE, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetAlphaCompare(G_AC_THRESHOLD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_16b, 1, dFTDisplayMainCollisionTexture),
    gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_16b, 0, 0x0000, G_TX_LOADTILE, 0, G_TX_NOMIRROR | G_TX_WRAP, 4, G_TX_NOLOD, G_TX_NOMIRROR | G_TX_WRAP, 4, G_TX_NOLOD),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 255, 512),
    gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_16b, 4, 0x0000, G_TX_RENDERTILE, 0, G_TX_NOMIRROR | G_TX_CLAMP, 4, G_TX_NOLOD, G_TX_NOMIRROR | G_TX_CLAMP, 4, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsSPVertex(dFTDisplayMainCollisionCubeCommonVtx0, 24, 0), // WARNING: Reads 24 vertices in a row, most of which are out of the bounds of this array!
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 4, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 8, 10, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 12, 14, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 16, 18, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 20, 22, 0),
    gsDPPipeSync(),
    gsDPSetAlphaCompare(G_AC_NONE),
    gsDPSetRenderMode(G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2),
    gsSPSetGeometryMode(G_LIGHTING | G_SHADING_SMOOTH),
    gsSPEndDisplayList()
};

// 0x8012C3D8
Gfx dFTDisplayMainMapCollisionBottomDL[/* */] =
{
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_LIGHTING | G_SHADING_SMOOTH),
    gsDPSetPrimColor(0, 0, 0xFF, 0xFF, 0xFF, 0xAC),
    gsDPSetEnvColor(0xB0, 0x00, 0xB0, 0xFF),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 0, 0, 0, PRIMITIVE, PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 0, 0, 0, PRIMITIVE),
    gsDPSetRenderMode(AA_EN | Z_UPD | IM_RD | CLR_ON_CVG | CVG_DST_WRAP | ZMODE_OPA | FORCE_BL | GBL_c1(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA), AA_EN | Z_UPD | IM_RD | CLR_ON_CVG | CVG_DST_WRAP | ZMODE_OPA | FORCE_BL | GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_16b, 1, dFTDisplayMainCollisionTexture),
    gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_16b, 0, 0x0000, G_TX_LOADTILE, 0, G_TX_NOMIRROR | G_TX_WRAP, 4, G_TX_NOLOD, G_TX_NOMIRROR | G_TX_WRAP, 4, G_TX_NOLOD),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 255, 512),
    gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_16b, 4, 0x0000, G_TX_RENDERTILE, 0, G_TX_NOMIRROR | G_TX_CLAMP, 4, G_TX_NOLOD, G_TX_NOMIRROR | G_TX_CLAMP, 4, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsSPVertex(dFTDisplayMainMapCollisionBottomVtx, ARRAY_COUNT(dFTDisplayMainMapCollisionBottomVtx), 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList()
};

// 0x8012C458
Gfx dFTDisplayMainMapCollisionTopDL[/* */] =
{
    gsDPPipeSync(),
    gsSPVertex(dFTDisplayMainMapCollisionTopVtx, ARRAY_COUNT(dFTDisplayMainMapCollisionTopVtx), 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_LIGHTING | G_SHADING_SMOOTH),
    gsDPSetRenderMode(G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2),
    gsSPEndDisplayList()
};

// 0x8012C490
Gfx dFTDisplayMainAfterImageVertexDL[/* */] =
{
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPClearGeometryMode(G_CULL_BOTH | G_LIGHTING),
    gsSPEndDisplayList()
};

// 0x8012C4B0
Gfx dFTDisplayMainAfterImageTriangleDL[/* */] =
{
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_CULL_BACK | G_LIGHTING),
    gsSPEndDisplayList()
};

// 0x8012C4C8
syColorRGBA dFTDisplayMainDefaultAfterImageColor1 = { 0x00, 0xFF, 0xFF, 0x00 };

// 0x8012C4CC
syColorRGBA dFTDisplayMainDefaultAfterImageColor2 = { 0xFF, 0xFF, 0xFF, 0x00 };

// 0x8012C4D0
syColorRGBA dFTDisplayMainItemAfterImageColor1 = { 0xFF, 0x40, 0xC0, 0x00 };

// 0x8012C4D4
syColorRGBA dFTDisplayMainItemAfterImageColor2 = { 0xFF, 0xFF, 0xFF, 0x00 };

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x800F1020
void ftDisplayMainDrawAfterImage(ftStruct *fp)
{
    s32 i, j;
    s32 next_index;
    s32 index;
    Vtx *base_p_vtx;
    Vtx *p_vtx;
    s32 vtx_count;
    s32 add_alpha;
    s32 base_alpha;
    f32 var_f20;
    f32 var_f22;
    f32 rotate;
    syColorRGBA *color1, *color2;
    Gfx *vtx_dl, *tri_dl;
    ftAfterImage *afterimage;
    Vec3f spC8;
    ftAfterImage *next_afterimage;
    s32 alpha;
    f32 scale;
    s32 alphainc;
    Vec3f spAC;

    index = fp->afterimage.desc_index;

    switch (fp->afterimage.is_itemswing)
    {
    case FALSE:
        var_f20 = 50.0F;
        var_f22 = 250.0F;

        add_alpha = 0;
        base_alpha = 0xFF;

        rotate = F_CLC_DTOR32(30.0F); // 0.5235988F

        color1 = &dFTDisplayMainDefaultAfterImageColor1;
        color2 = &dFTDisplayMainDefaultAfterImageColor2;

        vtx_dl = dFTDisplayMainAfterImageVertexDL;
        tri_dl = dFTDisplayMainAfterImageTriangleDL;
        break;

    case TRUE:
        var_f20 = 80.0F;
        var_f22 = 580.0F;

        add_alpha = 0;
        base_alpha = 0xFF;

        rotate = F_CLC_DTOR32(30.0F); // 0.5235988F

        color1 = &dFTDisplayMainItemAfterImageColor1;
        color2 = &dFTDisplayMainItemAfterImageColor2;

        vtx_dl = dFTDisplayMainAfterImageVertexDL;
        tri_dl = dFTDisplayMainAfterImageTriangleDL;
        break;
    }
    base_p_vtx = p_vtx = (Vtx*)gSYTaskmanGraphicsHeap.ptr;

    if (index != 0)
    {
        index = index - 1;
    }
    else index = ARRAY_COUNT(fp->afterimage.desc) - 1;

    for (i = fp->afterimage.drawstatus - 1; i >= 0; index = next_index, i--)
    {
        afterimage = &fp->afterimage.desc[index];

        alpha = (((base_alpha - add_alpha) / (fp->afterimage.drawstatus - 1)) * i) + add_alpha;

        p_vtx->v.ob[0] = (afterimage->translate_x + (afterimage->vec.x * var_f20));
        p_vtx->v.ob[1] = (afterimage->translate_y + (afterimage->vec.y * var_f20));
        p_vtx->v.ob[2] = (afterimage->translate_z + (afterimage->vec.z * var_f20));

        p_vtx->v.flag = 0;

        p_vtx->v.tc[0] = p_vtx->v.tc[1] = 0;

        p_vtx->v.cn[0] = color1->r;
        p_vtx->v.cn[1] = color1->g;
        p_vtx->v.cn[2] = color1->b;
        p_vtx->v.cn[3] = alpha;

        p_vtx = (gSYTaskmanGraphicsHeap.ptr = (Vtx*)gSYTaskmanGraphicsHeap.ptr + 1);

        p_vtx->v.ob[0] = (afterimage->translate_x + (afterimage->vec.x * var_f22));
        p_vtx->v.ob[1] = (afterimage->translate_y + (afterimage->vec.y * var_f22));
        p_vtx->v.ob[2] = (afterimage->translate_z + (afterimage->vec.z * var_f22));

        p_vtx->v.flag = 0;

        p_vtx->v.tc[0] = p_vtx->v.tc[1] = 0;

        p_vtx->v.cn[0] = color2->r;
        p_vtx->v.cn[1] = color2->g;
        p_vtx->v.cn[2] = color2->b;
        p_vtx->v.cn[3] = alpha;

        p_vtx = (gSYTaskmanGraphicsHeap.ptr = (Vtx*)gSYTaskmanGraphicsHeap.ptr + 1);

        if (i != 0)
        {
            if (index != 0)
            {
                next_index = index - 1;
            }
            else next_index = ARRAY_COUNT(fp->afterimage.desc) - 1;

            next_afterimage = &fp->afterimage.desc[next_index];

            if (syVectorNormCross3D(&afterimage->vec, &next_afterimage->vec, &spC8) != NULL)
            {
                f32 f_angle_diff = syVectorAngleDiff3D(&afterimage->vec, &next_afterimage->vec);
                s32 target_angle = f_angle_diff / rotate;

                if (target_angle != 0)
                {
                    s16 n_ai_x;
                    s16 vtx_x;
                    s16 vtx_y;
                    s16 vtx_z;
                    s16 n_ai_y;
                    s16 n_ai_z;

                    target_angle++;

                    scale = 1.0F / (target_angle);

                    n_ai_x = afterimage->translate_x;
                    n_ai_y = afterimage->translate_y;
                    n_ai_z = afterimage->translate_z;

                    f_angle_diff *= scale;

                    vtx_x = ((next_afterimage->translate_x - n_ai_x) * scale);
                    vtx_y = ((next_afterimage->translate_y - n_ai_y) * scale);
                    vtx_z = ((next_afterimage->translate_z - n_ai_z) * scale);

                    spAC = afterimage->vec;

                    alphainc = (((((base_alpha - add_alpha) / (fp->afterimage.drawstatus - 1)) * (i - 1)) + add_alpha) - alpha) * scale;

                    for (j = 0; j < target_angle - 1; j++)
                    {
                        n_ai_x += vtx_x;
                        n_ai_y += vtx_y;
                        n_ai_z += vtx_z;

                        func_80019438(&spAC, &spC8, f_angle_diff);

                        alpha += alphainc;

                        p_vtx->v.ob[0] = (n_ai_x + (spAC.x * var_f20));
                        p_vtx->v.ob[1] = (n_ai_y + (spAC.y * var_f20));
                        p_vtx->v.ob[2] = (n_ai_z + (spAC.z * var_f20));

                        p_vtx->v.flag = 0;

                        p_vtx->v.tc[0] = p_vtx->v.tc[1] = 0;

                        p_vtx->v.cn[0] = color1->r;
                        p_vtx->v.cn[1] = color1->g;
                        p_vtx->v.cn[2] = color1->b;
                        p_vtx->v.cn[3] = alpha;

                        p_vtx = (gSYTaskmanGraphicsHeap.ptr = (Vtx*)gSYTaskmanGraphicsHeap.ptr + 1);

                        p_vtx->v.ob[0] = (n_ai_x + (spAC.x * var_f22));
                        p_vtx->v.ob[1] = (n_ai_y + (spAC.y * var_f22));
                        p_vtx->v.ob[2] = (n_ai_z + (spAC.z * var_f22));

                        p_vtx->v.flag = 0;

                        p_vtx->v.tc[0] = p_vtx->v.tc[1] = 0;

                        p_vtx->v.cn[0] = color2->r;
                        p_vtx->v.cn[1] = color2->g;
                        p_vtx->v.cn[2] = color2->b;
                        p_vtx->v.cn[3] = alpha;

                        p_vtx = (gSYTaskmanGraphicsHeap.ptr = (Vtx*)gSYTaskmanGraphicsHeap.ptr + 1);
                    }
                }
            }
        }
    }
    vtx_count = ((uintptr_t)p_vtx - (uintptr_t)base_p_vtx) / (sizeof(*p_vtx) | sizeof(*base_p_vtx));

    gSPDisplayList(gSYTaskmanDLHeads[1]++, vtx_dl);

    gSPVertex(gSYTaskmanDLHeads[1]++, base_p_vtx, vtx_count, 0);

    for (i = 0; i < (vtx_count - 2); i += 2)
    {
        gSP2Triangles(gSYTaskmanDLHeads[1]++, i, i + 1, i + 2, FALSE, i + 1, i + 3, i + 2, FALSE);
    }
    gSPDisplayList(gSYTaskmanDLHeads[1]++, tri_dl);
}

// 0x800F17E8
void ftDisplayMainCalcFogColor(ftStruct *fp)
{
    s32 shade;
    s32 temp_color;
    s32 red;
    s32 green;
    s32 blue;
    s32 alpha;
    s32 shade_default;

    if (fp->shade == 0)
    {
        red = fp->colanim.maincolor.r;
        green = fp->colanim.maincolor.g;
        blue = fp->colanim.maincolor.b;
        alpha = fp->colanim.maincolor.a;
    }
    else
    {
        syColorRGBA *attr_shade_color = &fp->attributes->shade_color[fp->shade - 1];
        gmColKeys *ck = &fp->colanim.maincolor;

        shade_default = (((0xFF - attr_shade_color->a) * (0xFF - ck->a)) / 0xFF);

        if (shade_default == 0xFF)
        {
            red = fp->colanim.maincolor.r;
            green = fp->colanim.maincolor.g;
            blue = fp->colanim.maincolor.b;
            alpha = fp->colanim.maincolor.a;
        }
        else
        {
            shade_default = (0xFF - shade_default);

            temp_color = (((ck->r - fp->shade_color.r) * ck->a) / 0xFF) + fp->shade_color.r;

            red = (temp_color * 0xFF) / shade_default;

            if (red != 0)
            {
                alpha = ((temp_color * 0xFF) / red);
            }
            else alpha = ((shade_default - temp_color) * 0xFF) / 0xFF;

            temp_color = (((ck->g - fp->shade_color.g) * ck->a) / 0xFF) + fp->shade_color.g;

            green = (temp_color * 0xFF) / shade_default;

            temp_color = (((ck->b - fp->shade_color.b) * ck->a) / 0xFF) + fp->shade_color.b;

            blue = (temp_color * 0xFF) / shade_default;
        }
    }

    if (fp->attributes->fog_color.r != 0xFF)
    {
        alpha = (fp->attributes->fog_color.r * alpha) / 0xFF;
    }
    sFTDisplayMainFogColor.r = red;
    sFTDisplayMainFogColor.g = green;
    sFTDisplayMainFogColor.b = blue;
    sFTDisplayMainFogColor.a = alpha;
}

// 0x800F1B24
void ftDisplayMainSetFogColor(ftStruct *fp)
{
    gDPSetFogColor(gSYTaskmanDLHeads[0]++, sFTDisplayMainFogColor.r, sFTDisplayMainFogColor.g, sFTDisplayMainFogColor.b, sFTDisplayMainFogColor.a);
}

// 0x800F1B7C
void ftDisplayMainDecideFogColor(ftStruct *fp)
{
    if (fp->shade == 0)
    {
        gDPSetFogColor(gSYTaskmanDLHeads[0]++, 0x00, 0x00, 0x00, 0x00);
    }
    else
    {
        syColorRGBA *fog_color = &fp->attributes->shade_color[fp->shade - 1];

        gDPSetFogColor(gSYTaskmanDLHeads[0]++, fog_color->r, fog_color->g, fog_color->b, fog_color->a);
    }
}

// 0x800F1C08
void ftDisplayMainDecideFogDraw(u8 flags, ftStruct *fp)
{
    gDPPipeSync(gSYTaskmanDLHeads[0]++);

    if (flags & FTPARTS_FLAG_NOFOG)
    {
        gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_PASS, G_RM_AA_ZB_OPA_SURF2);
    }
    else
    {
        if (fp->colanim.is_use_maincolor)
        {
            if (flags & FTPARTS_FLAG_TOGGLEFOG)
            {
                if (sFTDisplayMainIsShadeFog == FALSE)
                {
                    sFTDisplayMainIsShadeFog = TRUE;

                    ftDisplayMainDecideFogColor(fp);
                }
            }
            else if (sFTDisplayMainIsShadeFog != FALSE)
            {
                sFTDisplayMainIsShadeFog = FALSE;

                ftDisplayMainSetFogColor(fp);
            }
        }
        if (sFTDisplayMainSkyFogAlpha == 0xFF)
        {
            gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_FOG_PRIM_A, G_RM_AA_ZB_OPA_SURF2);
        }
        else gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_FOG_PRIM_A, G_RM_AA_ZB_XLU_SURF2);
    }
}

// 0x800F1D44
void ftDisplayMainDrawAccessory(ftStruct *fp, DObj *dobj, ftParts *ft_parts)
{
    DObj *root_dobj = DObjGetStruct(ft_parts->gobj);

    switch (ft_parts->flags & 0xF)
    {
    case 0:
        if ((dobj->display_list != NULL) && !(dobj->flags & DOBJ_FLAG_NOTEXTURE))
        {
            gcDrawMObjForDObj(root_dobj, gSYTaskmanDLHeads);
            ftDisplayMainDecideFogDraw(ft_parts->flags, fp);

            gSPDisplayList(gSYTaskmanDLHeads[0]++, root_dobj->display_list);
        }
        break;

    case 1:
        if ((dobj->dl_array != NULL) && (dobj->dl_array[1] != NULL) && !(dobj->flags & DOBJ_FLAG_NOTEXTURE))
        {
            gcDrawMObjForDObj(root_dobj, gSYTaskmanDLHeads);
            ftDisplayMainDecideFogDraw(ft_parts->flags, fp);

            gSPDisplayList(gSYTaskmanDLHeads[0]++, root_dobj->display_list);
        }
        break;
    }
}

// 0x800F1E60
void ftDisplayMainDrawDefault(DObj *dobj)
{
    ftStruct *fp = ftGetStruct(dobj->parent_gobj);
    s32 sp58;
    s32 unused;
    Vec3f sp48;
    ftParts *ft_parts;
    DObj *sibling_dobj;
    Gfx **dls;

    ft_parts = ftGetParts(dobj);

    if (!(dobj->flags & DOBJ_FLAG_HIDDEN))
    {
        sp48 = gLBCommonScale;

        if (ft_parts != NULL)
        {
            switch (ft_parts->flags & 0xF)
            {
            case 0:
                sp58 = gcPrepDObjMatrix(gSYTaskmanDLHeads, dobj);

                if ((ft_parts != NULL) && (ft_parts->gobj != NULL) && (fp->ft_kind == nFTKindPurin))
                {
                    ftDisplayMainDrawAccessory(fp, dobj, ft_parts);
                }
                if ((dobj->display_list != NULL) && !(dobj->flags & DOBJ_FLAG_NOTEXTURE))
                {
                    gcDrawMObjForDObj(dobj, gSYTaskmanDLHeads);
                    ftDisplayMainDecideFogDraw(ft_parts->flags, fp);

                    gSPDisplayList(gSYTaskmanDLHeads[0]++, dobj->display_list);
                }
                break;

            case 1:
                dls = dobj->dl_array;

                if ((dls != NULL) && (dls[0] != NULL) && !(dobj->flags & DOBJ_FLAG_NOTEXTURE))
                {
                    ftDisplayMainDecideFogDraw(ft_parts->flags, fp);

                    gSPDisplayList(gSYTaskmanDLHeads[0]++, dls[0]);
                }
                sp58 = gcPrepDObjMatrix(gSYTaskmanDLHeads, dobj);

                if ((dls != NULL) && (dls[1] != NULL) && !(dobj->flags & DOBJ_FLAG_NOTEXTURE))
                {
                    gcDrawMObjForDObj(dobj, gSYTaskmanDLHeads);
                    ftDisplayMainDecideFogDraw(ft_parts->flags, fp);

                    gSPDisplayList(gSYTaskmanDLHeads[0]++, dls[1]);
                }
                break;
            }
        }
        else
        {
            sp58 = gcPrepDObjMatrix(gSYTaskmanDLHeads, dobj);

            if ((ft_parts != NULL) && (ft_parts->gobj != NULL) && (fp->ft_kind == nFTKindPurin))
            {
                ftDisplayMainDrawAccessory(fp, dobj, ft_parts);
            }
        }
        if ((ft_parts != NULL) && (ft_parts->gobj != NULL) && (fp->ft_kind == nFTKindPikachu))
        {
            ftDisplayMainDrawAccessory(fp, dobj, ft_parts);
        }
        if (dobj->child != NULL)
        {
            ftDisplayMainDrawDefault(dobj->child);
        }
        if ((sp58 != FALSE) && ((dobj->parent == DOBJ_PARENT_NULL) || (dobj->sib_next != NULL)))
        {
            gSPPopMatrix(gSYTaskmanDLHeads[0]++, G_MTX_MODELVIEW);
        }
        gLBCommonScale = sp48;
    }
    if (dobj->sib_prev == NULL)
    {
        sibling_dobj = dobj->sib_next;

        while (sibling_dobj != NULL)
        {
            ftDisplayMainDrawDefault(sibling_dobj);

            sibling_dobj = sibling_dobj->sib_next;
        }
    }
}

// 0x800F21B4
void ftDisplayMainDrawSkeleton(DObj *dobj)
{
    ftStruct *fp;
    s32 sp60;
    s32 unused;
    Vec3f sp50;
    Gfx **dls;
    ftParts *ft_parts;
    DObj *sibling_dobj;
    ftSkeleton *skeleton;

    fp = ftGetStruct(dobj->parent_gobj);
    ft_parts = ftGetParts(dobj);

    if (!(dobj->flags & DOBJ_FLAG_HIDDEN))
    {
        sp50 = gLBCommonScale;

        if ((ft_parts != NULL) && (ft_parts->joint_id >= nFTPartsJointCommonStart))
        {
            skeleton = &fp->attributes->skeleton[fp->colanim.skeleton_id][ft_parts->joint_id - nFTPartsJointCommonStart];

            switch (skeleton->flags & 0xF)
            {
            case 0:
                sp60 = gcPrepDObjMatrix(gSYTaskmanDLHeads, dobj);

                if (!(dobj->flags & DOBJ_FLAG_NOTEXTURE) && (skeleton->display_list != NULL))
                {
                    gcDrawMObjForDObj(dobj, gSYTaskmanDLHeads);
                    ftDisplayMainDecideFogDraw(skeleton->flags, fp);

                    gSPDisplayList(gSYTaskmanDLHeads[0]++, skeleton->display_list);
                }
                break;

            case 1:
                dls = skeleton->dl_array;

                if ((dls != NULL) && (dls[0] != NULL) && !(dobj->flags & DOBJ_FLAG_NOTEXTURE))
                {
                    ftDisplayMainDecideFogDraw(skeleton->flags, fp);

                    gSPDisplayList(gSYTaskmanDLHeads[0]++, dls[0]);
                }
                sp60 = gcPrepDObjMatrix(gSYTaskmanDLHeads, dobj);

                if ((dls != NULL) && (dls[1] != NULL) && !(dobj->flags & DOBJ_FLAG_NOTEXTURE))
                {
                    gcDrawMObjForDObj(dobj, gSYTaskmanDLHeads);
                    ftDisplayMainDecideFogDraw(skeleton->flags, fp);

                    gSPDisplayList(gSYTaskmanDLHeads[0]++, dls[1]);
                }
                break;
            }
        }
        else sp60 = gcPrepDObjMatrix(gSYTaskmanDLHeads, dobj);

        if (dobj->child != NULL)
        {
            ftDisplayMainDrawSkeleton(dobj->child);
        }
        if ((sp60 != FALSE) && ((dobj->parent == DOBJ_PARENT_NULL) || (dobj->sib_next != NULL)))
        {
            gSPPopMatrix(gSYTaskmanDLHeads[0]++, G_MTX_MODELVIEW);
        }
        gLBCommonScale = sp50;
    }
    if (dobj->sib_prev == NULL)
    {
        sibling_dobj = dobj->sib_next;

        while (sibling_dobj != NULL)
        {
            ftDisplayMainDrawSkeleton(sibling_dobj);
            sibling_dobj = sibling_dobj->sib_next;
        }
    }
}

// 0x800F24A0
void ftDisplayMainDrawAll(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    if
    (
        (fp->colanim.skeleton_id)                                           &&
        (attributes->skeleton != NULL)                                      &&
        (attributes->skeleton[fp->colanim.skeleton_id] != NULL)             &&
        (fp->joints[(s32)(attributes->skeleton[0])] != NULL)                 &&        // ???
        (fp->joints[(s32)(attributes->skeleton[0])]->display_list != NULL)             // What kind of Flintstones gummies were you on I need them right now
    )
    {
        ftDisplayMainDrawSkeleton(DObjGetStruct(fighter_gobj));
    }
    else ftDisplayMainDrawDefault(DObjGetStruct(fighter_gobj));

    if (fp->afterimage.drawstatus >= 2)
    {
        switch (fp->afterimage.is_itemswing)
        {
        case FALSE:
            ftDisplayMainDrawAfterImage(fp);
            break;

        case TRUE:
            ftDisplayMainDrawAfterImage(fp);
            break;
        }
    }
}

// 0x800F2584
void ftDisplayMainDrawParts(DObj *dobj)
{
    ftStruct *fp;
    s32 sp90;
    s32 hitstatus;
    DObj *sibling_dobj;
    gsMtxStore mtx_store;
    s32 i;
    Vec3f sp74;

    fp = ftGetStruct(dobj->parent_gobj);

    sp74 = gLBCommonScale;

    sp90 = gcPrepDObjMatrix(gSYTaskmanDLHeads, dobj);

    for (i = 0; i < ARRAY_COUNT(fp->fighter_hurt); i++)
    {
        ftHurtbox *ft_hurt = &fp->fighter_hurt[i];

        if ((ft_hurt->hitstatus != nGMHitStatusNone) && (dobj == ft_hurt->joint))
        {
            syMatrixStoreGbi(mtx_store, gSYTaskmanGraphicsHeap);

            syMatrixTranslate(mtx_store.gbi, ft_hurt->offset.x, ft_hurt->offset.y, ft_hurt->offset.z);

            gSPMatrix(gSYTaskmanDLHeads[0]++, mtx_store.gbi, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW);

            syMatrixStoreGbi(mtx_store, gSYTaskmanGraphicsHeap);

            syMatrixSca(mtx_store.gbi, ft_hurt->size.x / 15.0F, ft_hurt->size.y / 15.0F, ft_hurt->size.z / 15.0F);

            gSPMatrix(gSYTaskmanDLHeads[0]++, mtx_store.gbi, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW);

            gDPPipeSync(gSYTaskmanDLHeads[0]++);

            if
            (
                (fp->special_hitstatus == nGMHitStatusIntangible)  ||
                (fp->star_hitstatus == nGMHitStatusIntangible)     ||
                (fp->hitstatus == nGMHitStatusIntangible)          ||
                (ft_hurt->hitstatus == nGMHitStatusIntangible)
            )
            {
                hitstatus = nGMHitStatusIntangible;
            }
            else if
            (
                (fp->special_hitstatus == nGMHitStatusInvincible)  ||
                (fp->star_hitstatus == nGMHitStatusInvincible)     ||
                (fp->hitstatus == nGMHitStatusInvincible)          ||
                (ft_hurt->hitstatus == nGMHitStatusInvincible)
            )
            {
                hitstatus = nGMHitStatusInvincible;
            }
            else hitstatus = nGMHitStatusNormal;

            switch (hitstatus)
            {
            case nGMHitStatusNormal:
                gDPSetPrimColor(gSYTaskmanDLHeads[0]++, 0, 0, 0xFF, 0xFF, 0xFF, 0xFF);
                gDPSetEnvColor(gSYTaskmanDLHeads[0]++, 0xD0, 0xD0, 0x00, 0xFF);
                break;

            case nGMHitStatusInvincible:
                gDPSetPrimColor(gSYTaskmanDLHeads[0]++, 0, 0, 0xFF, 0xFF, 0xFF, 0xFF);
                gDPSetEnvColor(gSYTaskmanDLHeads[0]++, 0x00, 0xD0, 0x00, 0xFF);
                break;

            case nGMHitStatusIntangible:
                gDPSetPrimColor(gSYTaskmanDLHeads[0]++, 0, 0, 0xFF, 0xFF, 0xFF, 0xFF);
                gDPSetEnvColor(gSYTaskmanDLHeads[0]++, 0x00, 0x00, 0xD0, 0xFF);
                break;
            }
            gSPDisplayList(gSYTaskmanDLHeads[0]++, dFTDisplayMainHurtCollisionCuboidDL);

            gSPPopMatrix(gSYTaskmanDLHeads[0]++, G_MTX_MODELVIEW);

            break;
        }
    }
    if (dobj->child != NULL)
    {
        ftDisplayMainDrawParts(dobj->child);
    }
    if (sp90 != FALSE)
    {
        if ((dobj->parent == DOBJ_PARENT_NULL) || (dobj->sib_next != NULL))
        {
            gSPPopMatrix(gSYTaskmanDLHeads[0]++, G_MTX_MODELVIEW);
        }
    }
    gLBCommonScale = sp74;

    if (dobj->sib_prev == NULL)
    {
        sibling_dobj = dobj->sib_next;

        while (sibling_dobj != NULL)
        {
            ftDisplayMainDrawParts(sibling_dobj);

            sibling_dobj = sibling_dobj->sib_next;
        }
    }
}

// 0x800F293C - WARNING: Fake match. sp110 snaps to sp114, cannot make room on stack to align it.
void ftDisplayMainFuncDisplay(GObj *fighter_gobj)
{
    ftStruct *fp;
    ftAttributes *attributes;
    ftHitbox *ft_hit;
    gsMtxStore mtx_store;
    s32 i;
    Vec3f sp128;
    f32 cam_pos_x;
    f32 cam_pos_y;
    Vec3f sp110;

    fp = ftGetStruct(fighter_gobj);
    attributes = fp->attributes;

    sFTDisplayMainSkyFogAlpha = 0xFF;
    sFTDisplayMainIsShadeFog = FALSE;

    if ((fp->is_invisible) && (fp->display_mode == nDBDisplayModeMaster))
    {
        fp->x18D_flag_b5 = FALSE;

        return;
    }
    if ((fp->status_info.pl_kind == nFTPlayerKindMan) || (fp->status_info.pl_kind == nFTPlayerKindCom) || (fp->status_info.pl_kind == nFTPlayerKindGameKey))
    {
        if (gGCCurrentCamera->gobj_id == nGCCommonKindMainCamera)
        {
            switch (fp->status_info.status_id)
            {
            case nFTCommonStatusDeadUpStar:
            case nFTCommonStatusDeadUpFall:
                fp->x18D_flag_b5 = FALSE;
                break;

            default:
                sp128 = fp->joints[nFTPartsJointTopN]->translate.vec.f;

                sp128.y += fp->attributes->cam_offset_y;

            #if defined(AVOID_UB) || defined(NON_MATCHING)
                syVectorDiff3D(&sp110, &CameraGetStruct(gCMManagerCameraGObj)->vec.at, &sp128);

                if (fp->attributes->cam_offset_y < syVectorMag3D(&sp110))
                {
                    syVectorNorm3D(&sp110);
                    syVectorScale3D(&sp110, fp->attributes->cam_offset_y);
                    syVectorAdd3D(&sp128, &sp110);
                }
            #else
                // SUPER FAKE. I hope I can fix this in the future. sp128 - 2 should really be sp110, but we get stack issues otherwise.
                syVectorDiff3D(&sp128 - 2, &CameraGetStruct(gCMManagerCameraGObj)->vec.at, &sp128);

                if (fp->attributes->cam_offset_y < syVectorMag3D(&sp128 - 2))
                {
                    syVectorNorm3D(&sp128 - 2);
                    syVectorScale3D(&sp128 - 2, fp->attributes->cam_offset_y);
                    syVectorAdd3D(&sp128, &sp128 - 2);
                }
            #endif

                func_ovl2_800EB924(CameraGetStruct(gCMManagerCameraGObj), gCMManagerMtx, &sp128, &cam_pos_x, &cam_pos_y);

                if (cmManagerCheckTargetInBounds(cam_pos_x, cam_pos_y) == FALSE)
                {
                    sp128 = fp->joints[nFTPartsJointTopN]->translate.vec.f;

                    sp128.y += 300.0F;

                    func_ovl2_800EB924(CameraGetStruct(gCMManagerCameraGObj), gCMManagerMtx, &sp128, &fp->ifpos_x, &fp->ifpos_y);

                    fp->x18D_flag_b5 = TRUE;

                    if (gIFCommonPlayerInterface.is_ifmagnify_display != FALSE)
                    {
                        if (!(fp->is_magnify_hide) && !(fp->x18E_flag_b1))
                        {
                            gIFCommonPlayerInterface.ifmagnify_mode = 1;

                            ifCommonPlayerArrowsUpdateFlags(cam_pos_x, cam_pos_y);
                        }
                    }
                    return;
                }
                else fp->x18D_flag_b5 = FALSE;

                break;
            }
        }
        else if (!(fp->is_magnify_hide) && !(fp->x18E_flag_b1) && (fp->x18D_flag_b5))
        {
            ifCommonPlayerMagnifyUpdateViewport(gSYTaskmanDLHeads, fp);
        }
        else return;
    }
    gLBCommonScale.x = gLBCommonScale.y = gLBCommonScale.z = 1.0F;

    if ((fp->display_mode == nDBDisplayModeMaster) || (fp->display_mode == nDBDisplayModeMapCollision))
    {
        gDPPipeSync(gSYTaskmanDLHeads[0]++);

        if (fp->colanim.is_use_light)
        {
            if (fp->status_info.pl_kind != nFTPlayerKindDemo)
            {
                ftDisplayLightsDrawReflect(gSYTaskmanDLHeads, fp->lr * fp->colanim.light_angle_x, fp->colanim.light_angle_y);
            }
            else ftDisplayLightsDrawReflect(gSYTaskmanDLHeads, F_CLC_RTOD32(DObjGetStruct(fighter_gobj)->rotate.vec.f.y) + fp->colanim.light_angle_x, fp->colanim.light_angle_y);
        }
        gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_2CYCLE);

        gSPSetGeometryMode(gSYTaskmanDLHeads[0]++, G_ZBUFFER | G_SHADE | G_CULL_BACK | G_LIGHTING | G_SHADING_SMOOTH);

        gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_FOG_PRIM_A, G_RM_AA_ZB_OPA_SURF2);

        if (fp->colanim.is_use_blendcolor)
        {
            gDPSetEnvColor(gSYTaskmanDLHeads[0]++, fp->colanim.blendcolor.r, fp->colanim.blendcolor.g, fp->colanim.blendcolor.b, fp->colanim.blendcolor.a);

            sFTDisplayMainSkyFogAlpha = fp->colanim.blendcolor.a;
        }
        else if (fp->is_use_fogcolor)
        {
            gDPSetEnvColor(gSYTaskmanDLHeads[0]++, fp->fog_color.r, fp->fog_color.g, fp->fog_color.b, fp->fog_color.a);

            sFTDisplayMainSkyFogAlpha = fp->fog_color.a;
        }
        else if (fp->status_info.pl_kind != nFTPlayerKindDemo)
        {
            sFTDisplayMainSkyFogAlpha = mpCollisionSetLightColorGetAlpha(gSYTaskmanDLHeads);
        }
        else sFTDisplayMainSkyFogAlpha = scSubsysFighterDrawLightColorGetAlpha(gSYTaskmanDLHeads);

        if (fp->colanim.is_use_maincolor)
        {
            ftDisplayMainCalcFogColor(fp);
            ftDisplayMainSetFogColor(fp);
        }
        else ftDisplayMainDecideFogColor(fp);

        if (fp->shuffle_tics != 0)
        {
            syMatrixStoreGbi(mtx_store, gSYTaskmanGraphicsHeap);

            syMatrixTranslate
            (
                mtx_store.gbi,
                dFTDisplayMainShufflePositions[fp->is_shuffle_electric][fp->shuffle_frame_index].x,
                dFTDisplayMainShufflePositions[fp->is_shuffle_electric][fp->shuffle_frame_index].y,
                0.0F
            );
            gSPMatrix(gSYTaskmanDLHeads[0]++, mtx_store.gbi, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW);
        }
        if ((fp->status_info.pl_kind == nFTPlayerKindDemo) || (fp->status_info.pl_kind == nFTPlayerKindKey) || (gGCCurrentCamera->gobj_id == nGCCommonKindMainCamera))
        {
            ftDisplayMainDrawAll(fighter_gobj);
        }
        else
        {
            fp->joints[nFTPartsJointTopN]->gcmatrix[0]->kind = nGCTransformRotRpyR;

            ftDisplayMainDrawAll(fighter_gobj);

            fp->joints[nFTPartsJointTopN]->gcmatrix[0]->kind = 0x4B;
        }
        if (fp->shuffle_tics != 0)
        {
            gSPPopMatrix(gSYTaskmanDLHeads[0]++, G_MTX_MODELVIEW);
        }
        gDPPipeSync(gSYTaskmanDLHeads[0]++);

        gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);

        gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);

        if (fp->status_info.pl_kind != nFTPlayerKindDemo)
        {
            ftDisplayLightsDrawReflect(gSYTaskmanDLHeads, gMPCollisionLightAngleX, gMPCollisionLightAngleY);
        }
        else ftDisplayLightsDrawReflect(gSYTaskmanDLHeads, scSubsysFighterGetLightAngleX(), scSubsysFighterGetLightAngleY());

        if (fp->display_mode == nDBDisplayModeMapCollision)
        {
            gDPPipeSync(gSYTaskmanDLHeads[0]++);

            syMatrixStoreGbi(mtx_store, gSYTaskmanGraphicsHeap);

            syMatrixTranslate
            (
                mtx_store.gbi,
                DObjGetStruct(fighter_gobj)->translate.vec.f.x,
                DObjGetStruct(fighter_gobj)->translate.vec.f.y + attributes->objcoll.bottom,
                DObjGetStruct(fighter_gobj)->translate.vec.f.z
            );

            gSPMatrix(gSYTaskmanDLHeads[0]++, mtx_store.gbi, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW);

            syMatrixStoreGbi(mtx_store, gSYTaskmanGraphicsHeap);

            syMatrixSca(mtx_store.gbi, attributes->objcoll.width / 30.0F, attributes->objcoll.center / 30.0F, 1.0F);

            gSPMatrix(gSYTaskmanDLHeads[0]++, mtx_store.gbi, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW);

            gSPDisplayList(gSYTaskmanDLHeads[0]++, dFTDisplayMainMapCollisionBottomDL);

            gSPPopMatrix(gSYTaskmanDLHeads[0]++, G_MTX_MODELVIEW);

            syMatrixStoreGbi(mtx_store, gSYTaskmanGraphicsHeap);

            syMatrixTranslate
            (
                mtx_store.gbi,
                DObjGetStruct(fighter_gobj)->translate.vec.f.x,
                DObjGetStruct(fighter_gobj)->translate.vec.f.y + attributes->objcoll.center,
                DObjGetStruct(fighter_gobj)->translate.vec.f.z
            );

            gSPMatrix(gSYTaskmanDLHeads[0]++, mtx_store.gbi, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW);

            syMatrixStoreGbi(mtx_store, gSYTaskmanGraphicsHeap);

            syMatrixSca(mtx_store.gbi, attributes->objcoll.width / 30.0F, (attributes->objcoll.top - attributes->objcoll.center) / 30.0F, 1.0F);

            gSPMatrix(gSYTaskmanDLHeads[0]++, mtx_store.gbi, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW);

            gSPDisplayList(gSYTaskmanDLHeads[0]++, dFTDisplayMainMapCollisionTopDL);

            gSPPopMatrix(gSYTaskmanDLHeads[0]++, G_MTX_MODELVIEW);

            syMatrixStoreGbi(mtx_store, gSYTaskmanGraphicsHeap);

            gDPPipeSync(gSYTaskmanDLHeads[0]++);

            syMatrixTranslate
            (
                mtx_store.gbi,
                DObjGetStruct(fighter_gobj)->translate.vec.f.x + (fp->coll_data.cliffcatch_coll.x * fp->lr),
                DObjGetStruct(fighter_gobj)->translate.vec.f.y + fp->coll_data.cliffcatch_coll.y,
                DObjGetStruct(fighter_gobj)->translate.vec.f.z
            );

            gSPMatrix(gSYTaskmanDLHeads[0]++, mtx_store.gbi, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW);

            syMatrixStoreGbi(mtx_store, gSYTaskmanGraphicsHeap);

            syMatrixSca(mtx_store.gbi, 3.0F, 3.0F, 3.0F);

            gSPMatrix(gSYTaskmanDLHeads[0]++, mtx_store.gbi, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW);

            gDPSetPrimColor(gSYTaskmanDLHeads[0]++, 0, 0, 0xFF, 0xFF, 0xFF, 0xFF);

            gDPSetEnvColor(gSYTaskmanDLHeads[0]++, 0xD0, 0x00, 0xD0, 0xFF);

            gSPDisplayList(gSYTaskmanDLHeads[0]++, dFTDisplayMainHurtCollisionCuboidDL);

            gSPPopMatrix(gSYTaskmanDLHeads[0]++, G_MTX_MODELVIEW);
        }
    }
    else
    {
        if (gGCCurrentCamera->gobj_id == nGCCommonKindMainCamera)
        {
            ftDisplayMainDrawParts(DObjGetStruct(fighter_gobj));
        }
        else
        {
            fp->joints[nFTPartsJointTopN]->gcmatrix[0]->kind = nGCTransformRotRpyR;

            ftDisplayMainDrawParts(DObjGetStruct(fighter_gobj));

            fp->joints[nFTPartsJointTopN]->gcmatrix[0]->kind = 0x4B;
        }
        for (i = 0; i < ARRAY_COUNT(fp->fighter_hit); i++)
        {
            ft_hit = &fp->fighter_hit[i];

            if ((ft_hit->update_state != nGMHitUpdateDisable) && (ft_hit->update_state != nGMHitUpdateNew))
            {
                gDPPipeSync(gSYTaskmanDLHeads[0]++);

                if (fp->display_mode == nDBDisplayModeHitAttackOutline)
                {
                    gDPSetPrimColor(gSYTaskmanDLHeads[0]++, 0, 0, 0xB0, 0x00, 0x00, 0xFF);

                    gDPSetEnvColor(gSYTaskmanDLHeads[0]++, 0xB0, 0x00, 0x00, 0xFF);

                    gDPSetBlendColor(gSYTaskmanDLHeads[0]++, 0x00, 0x00, 0x00, 0xE0);
                }
                else
                {
                    gDPSetPrimColor(gSYTaskmanDLHeads[0]++, 0, 0, 0xFF, 0xFF, 0xFF, 0xFF);

                    gDPSetEnvColor(gSYTaskmanDLHeads[0]++, 0xB0, 0x00, 0x00, 0xFF);

                    gDPSetBlendColor(gSYTaskmanDLHeads[0]++, 0x00, 0x00, 0x00, 0x00);
                }
                if (ft_hit->update_state == nGMHitUpdateInterpolate)
                {
                    syMatrixStoreGbi(mtx_store, gSYTaskmanGraphicsHeap);

                    syMatrixTranslate(mtx_store.gbi, ft_hit->pos_prev.x, ft_hit->pos_prev.y, ft_hit->pos_prev.z);

                    gSPMatrix(gSYTaskmanDLHeads[0]++, mtx_store.gbi, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW);

                    syMatrixStoreGbi(mtx_store, gSYTaskmanGraphicsHeap);

                    syMatrixSca(mtx_store.gbi, ft_hit->size / 15.0F, ft_hit->size / 15.0F, ft_hit->size / 15.0F);

                    gSPMatrix(gSYTaskmanDLHeads[0]++, mtx_store.gbi, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW);

                    gSPDisplayList(gSYTaskmanDLHeads[0]++, dFTDisplayMainHitCollisionEdgeDL);

                    gSPPopMatrix(gSYTaskmanDLHeads[0]++, G_MTX_MODELVIEW);
                }
                syMatrixStoreGbi(mtx_store, gSYTaskmanGraphicsHeap);

                syMatrixTranslate(mtx_store.gbi, ft_hit->pos.x, ft_hit->pos.y, ft_hit->pos.z);

                gSPMatrix(gSYTaskmanDLHeads[0]++, mtx_store.gbi, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW);

                syMatrixStoreGbi(mtx_store, gSYTaskmanGraphicsHeap);

                syMatrixSca(mtx_store.gbi, ft_hit->size / 15.0F, ft_hit->size / 15.0F, ft_hit->size / 15.0F);

                gSPMatrix(gSYTaskmanDLHeads[0]++, mtx_store.gbi, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW);

                if (ft_hit->update_state == nGMHitUpdateInterpolate)
                {
                    gSPDisplayList(gSYTaskmanDLHeads[0]++, dFTDisplayMainHitCollisionBlendDL);
                }
                gSPDisplayList(gSYTaskmanDLHeads[0]++, dFTDisplayMainHitCollisionCubeDL);

                gSPPopMatrix(gSYTaskmanDLHeads[0]++, G_MTX_MODELVIEW);
            }
        }
    }
    if ((fp->status_info.pl_kind == nFTPlayerKindMan) || (fp->status_info.pl_kind == nFTPlayerKindCom) || (fp->status_info.pl_kind == nFTPlayerKindGameKey))
    {
        if (gGCCurrentCamera->gobj_id != nGCCommonKindMainCamera)
        {
            if (!(fp->is_magnify_hide) && !(fp->x18E_flag_b1) && (fp->x18D_flag_b5))
            {
                ifCommonPlayerMagnifyFuncDisplay(fp);
            }
        }
    }
}
