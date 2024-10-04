#include <ef/effect.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern uintptr_t lEFCommonParticleBankGenLo;                 // 0x00AC7340
extern uintptr_t lEFCommonParticleBankGenHi;                 // 0x00AC9DE0
extern uintptr_t lEFCommonParticleBankTextureLo;                // 0x00AC9DE0
extern uintptr_t lEFCommonParticleBankTextureHi;                // 0x00B16C80

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x800FCCC0
void efDisplayProcDisplayBlendCLD(GObj *effect_gobj)
{
    gDPPipeSync(gSYTasklogDLHeads[1]++);

    gDPSetRenderMode(gSYTasklogDLHeads[1]++, G_RM_CLD_SURF, G_RM_CLD_SURF2);

    gDPSetAlphaCompare(gSYTasklogDLHeads[1]++, G_AC_THRESHOLD);

    gDPSetBlendColor(gSYTasklogDLHeads[1]++, 0x00, 0x00, 0x00, 0x08);

    gSPClearGeometryMode(gSYTasklogDLHeads[1]++, G_ZBUFFER);
}

// 0x800FCD64
void efDisplayProcDisplayXLU(GObj *effect_gobj)
{
    gDPPipeSync(gSYTasklogDLHeads[1]++);

    gDPSetRenderMode(gSYTasklogDLHeads[1]++, G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2);

    gDPSetAlphaCompare(gSYTasklogDLHeads[1]++, G_AC_NONE);

    gSPSetGeometryMode(gSYTasklogDLHeads[1]++, G_ZBUFFER);
}

// 0x800FCDEC
void efDisplayMakeBlendCLD(void)
{
    gcAddGObjDisplay(gcMakeGObjSPAfter(nOMObjCommonKindEffect, NULL, nOMObjCommonLinkIDEffect, GOBJ_LINKORDER_DEFAULT), efDisplayProcDisplayBlendCLD, 15, 3, -1);
    gcAddGObjDisplay(gcMakeGObjSPAfter(nOMObjCommonKindEffect, NULL, nOMObjCommonLinkIDEffect, GOBJ_LINKORDER_DEFAULT), efDisplayProcDisplayBlendCLD, 18, 3, -1);
}

// 0x800FCE6C
void efDisplayMakeXLU(void)
{
    gcAddGObjDisplay(gcMakeGObjSPAfter(nOMObjCommonKindEffect, NULL, nOMObjCommonLinkIDEffect, GOBJ_LINKORDER_DEFAULT), efDisplayProcDisplayXLU, 15, 0, -1);
    gcAddGObjDisplay(gcMakeGObjSPAfter(nOMObjCommonKindEffect, NULL, nOMObjCommonLinkIDEffect, GOBJ_LINKORDER_DEFAULT), efDisplayProcDisplayXLU, 18, 0, -1);
}

// 0x800FCEEC
void efDisplayProcDisplayZPerspXLU(GObj *effect_gobj)
{
    gDPPipeSync(gSYTasklogDLHeads[0]++);

    gDPSetRenderMode(gSYTasklogDLHeads[0]++, G_RM_XLU_SURF, G_RM_XLU_SURF2);

    lbParticleDrawTextures(effect_gobj);

    gDPPipeSync(gSYTasklogDLHeads[0]++);

    gDPSetTexturePersp(gSYTasklogDLHeads[0]++, G_TP_PERSP);

    gDPSetDepthSource(gSYTasklogDLHeads[0]++, G_ZS_PIXEL);

    gDPSetRenderMode(gSYTasklogDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x800FCFCC
void efDisplayProcDisplayZPerspCLD(GObj *effect_gobj)
{
    gDPPipeSync(gSYTasklogDLHeads[0]++);

    gDPSetRenderMode(gSYTasklogDLHeads[0]++, G_RM_CLD_SURF, G_RM_CLD_SURF2);

    lbParticleDrawTextures(effect_gobj);

    gDPPipeSync(gSYTasklogDLHeads[0]++);

    gDPSetTexturePersp(gSYTasklogDLHeads[0]++, G_TP_PERSP);

    gDPSetDepthSource(gSYTasklogDLHeads[0]++, G_ZS_PIXEL);

    gDPSetRenderMode(gSYTasklogDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x800FD0AC
void efDisplayProcDisplayZPerspAAXLU(GObj *effect_gobj)
{
    gDPPipeSync(gSYTasklogDLHeads[0]++);

    gDPSetRenderMode(gSYTasklogDLHeads[0]++, G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2);

    lbParticleDrawTextures(effect_gobj);

    gDPPipeSync(gSYTasklogDLHeads[0]++);

    gDPSetTexturePersp(gSYTasklogDLHeads[0]++, G_TP_PERSP);

    gDPSetDepthSource(gSYTasklogDLHeads[0]++, G_ZS_PIXEL);

    gDPSetRenderMode(gSYTasklogDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x800FD18C
void efDisplayInitAll(void)
{
    GObj *gobj;

    gobj = gcMakeGObjSPAfter(nOMObjCommonKindEffect, NULL, nOMObjCommonLinkIDEffect, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(gobj, efDisplayProcDisplayZPerspCLD, 18, 1, GOBJ_CAMTAG_DEFAULT);
    gobj->cam_mask = (CAMERA_MASK_DLLINK(2) | CAMERA_MASK_DLLINK(0));

    gobj = gcMakeGObjSPAfter(nOMObjCommonKindEffect, NULL, nOMObjCommonLinkIDEffect, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(gobj, efDisplayProcDisplayZPerspCLD, 15, 1, GOBJ_CAMTAG_DEFAULT);
    gobj->cam_mask = CAMERA_MASK_DLLINK(1);

    gobj = gcMakeGObjSPAfter(nOMObjCommonKindInterface, NULL, nOMObjCommonLinkIDInterface, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(gobj, efDisplayProcDisplayZPerspXLU, 25, GOBJ_DLLINKORDER_DEFAULT, GOBJ_CAMTAG_DEFAULT);
    gobj->cam_mask = CAMERA_MASK_DLLINK(3);

    gobj = gcMakeGObjSPAfter(nOMObjCommonKindEffect, NULL, nOMObjCommonLinkIDEffect, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(gobj, efDisplayProcDisplayZPerspAAXLU, 10, GOBJ_DLLINKORDER_DEFAULT, GOBJ_CAMTAG_DEFAULT);
    gobj->cam_mask = CAMERA_MASK_DLLINK(4);

    gEFManagerParticleBankID = efAllocGetAddParticleBankID
    (
        &lEFCommonParticleBankGenLo,
        &lEFCommonParticleBankGenHi,
        &lEFCommonParticleBankTextureLo,
        &lEFCommonParticleBankTextureHi
    );
}
