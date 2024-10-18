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
void efDisplayFuncDisplayBlendCLD(GObj *effect_gobj)
{
    gDPPipeSync(gSYTaskmanDLHeads[1]++);

    gDPSetRenderMode(gSYTaskmanDLHeads[1]++, G_RM_CLD_SURF, G_RM_CLD_SURF2);

    gDPSetAlphaCompare(gSYTaskmanDLHeads[1]++, G_AC_THRESHOLD);

    gDPSetBlendColor(gSYTaskmanDLHeads[1]++, 0x00, 0x00, 0x00, 0x08);

    gSPClearGeometryMode(gSYTaskmanDLHeads[1]++, G_ZBUFFER);
}

// 0x800FCD64
void efDisplayFuncDisplayXLU(GObj *effect_gobj)
{
    gDPPipeSync(gSYTaskmanDLHeads[1]++);

    gDPSetRenderMode(gSYTaskmanDLHeads[1]++, G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2);

    gDPSetAlphaCompare(gSYTaskmanDLHeads[1]++, G_AC_NONE);

    gSPSetGeometryMode(gSYTaskmanDLHeads[1]++, G_ZBUFFER);
}

// 0x800FCDEC
void efDisplayMakeBlendCLD(void)
{
    gcAddGObjDisplay(gcMakeGObjSPAfter(nOMObjCommonKindEffect, NULL, nOMObjCommonLinkIDEffect, GOBJ_LINKORDER_DEFAULT), efDisplayFuncDisplayBlendCLD, 15, 3, -1);
    gcAddGObjDisplay(gcMakeGObjSPAfter(nOMObjCommonKindEffect, NULL, nOMObjCommonLinkIDEffect, GOBJ_LINKORDER_DEFAULT), efDisplayFuncDisplayBlendCLD, 18, 3, -1);
}

// 0x800FCE6C
void efDisplayMakeXLU(void)
{
    gcAddGObjDisplay(gcMakeGObjSPAfter(nOMObjCommonKindEffect, NULL, nOMObjCommonLinkIDEffect, GOBJ_LINKORDER_DEFAULT), efDisplayFuncDisplayXLU, 15, 0, -1);
    gcAddGObjDisplay(gcMakeGObjSPAfter(nOMObjCommonKindEffect, NULL, nOMObjCommonLinkIDEffect, GOBJ_LINKORDER_DEFAULT), efDisplayFuncDisplayXLU, 18, 0, -1);
}

// 0x800FCEEC
void efDisplayFuncDisplayZPerspXLU(GObj *effect_gobj)
{
    gDPPipeSync(gSYTaskmanDLHeads[0]++);

    gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_XLU_SURF, G_RM_XLU_SURF2);

    lbParticleDrawTextures(effect_gobj);

    gDPPipeSync(gSYTaskmanDLHeads[0]++);

    gDPSetTexturePersp(gSYTaskmanDLHeads[0]++, G_TP_PERSP);

    gDPSetDepthSource(gSYTaskmanDLHeads[0]++, G_ZS_PIXEL);

    gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x800FCFCC
void efDisplayFuncDisplayZPerspCLD(GObj *effect_gobj)
{
    gDPPipeSync(gSYTaskmanDLHeads[0]++);

    gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_CLD_SURF, G_RM_CLD_SURF2);

    lbParticleDrawTextures(effect_gobj);

    gDPPipeSync(gSYTaskmanDLHeads[0]++);

    gDPSetTexturePersp(gSYTaskmanDLHeads[0]++, G_TP_PERSP);

    gDPSetDepthSource(gSYTaskmanDLHeads[0]++, G_ZS_PIXEL);

    gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x800FD0AC
void efDisplayFuncDisplayZPerspAAXLU(GObj *effect_gobj)
{
    gDPPipeSync(gSYTaskmanDLHeads[0]++);

    gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2);

    lbParticleDrawTextures(effect_gobj);

    gDPPipeSync(gSYTaskmanDLHeads[0]++);

    gDPSetTexturePersp(gSYTaskmanDLHeads[0]++, G_TP_PERSP);

    gDPSetDepthSource(gSYTaskmanDLHeads[0]++, G_ZS_PIXEL);

    gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x800FD18C
void efDisplayInitAll(void)
{
    GObj *gobj;

    gobj = gcMakeGObjSPAfter(nOMObjCommonKindEffect, NULL, nOMObjCommonLinkIDEffect, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(gobj, efDisplayFuncDisplayZPerspCLD, 18, 1, -1);
    gobj->cam_mask = (CAMERA_MASK_DLLINK(2) | CAMERA_MASK_DLLINK(0));

    gobj = gcMakeGObjSPAfter(nOMObjCommonKindEffect, NULL, nOMObjCommonLinkIDEffect, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(gobj, efDisplayFuncDisplayZPerspCLD, 15, 1, -1);
    gobj->cam_mask = CAMERA_MASK_DLLINK(1);

    gobj = gcMakeGObjSPAfter(nOMObjCommonKindInterface, NULL, nOMObjCommonLinkIDInterface, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(gobj, efDisplayFuncDisplayZPerspXLU, 25, GOBJ_DLLINKORDER_DEFAULT, -1);
    gobj->cam_mask = CAMERA_MASK_DLLINK(3);

    gobj = gcMakeGObjSPAfter(nOMObjCommonKindEffect, NULL, nOMObjCommonLinkIDEffect, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(gobj, efDisplayFuncDisplayZPerspAAXLU, 10, GOBJ_DLLINKORDER_DEFAULT, -1);
    gobj->cam_mask = CAMERA_MASK_DLLINK(4);

    gEFManagerParticleBankID = efAllocGetAddParticleBankID
    (
        &lEFCommonParticleBankGenLo,
        &lEFCommonParticleBankGenHi,
        &lEFCommonParticleBankTextureLo,
        &lEFCommonParticleBankTextureHi
    );
}
