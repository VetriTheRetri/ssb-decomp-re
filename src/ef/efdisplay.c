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
void efDisplayProcDrawBlendCLD(GObj *effect_gobj)
{
    gDPPipeSync(gDisplayListHead[1]++);

    gDPSetRenderMode(gDisplayListHead[1]++, G_RM_CLD_SURF, G_RM_CLD_SURF2);

    gDPSetAlphaCompare(gDisplayListHead[1]++, G_AC_THRESHOLD);

    gDPSetBlendColor(gDisplayListHead[1]++, 0x00, 0x00, 0x00, 0x08);

    gSPClearGeometryMode(gDisplayListHead[1]++, G_ZBUFFER);
}

// 0x800FCD64
void efDisplayProcDrawXLU(GObj *effect_gobj)
{
    gDPPipeSync(gDisplayListHead[1]++);

    gDPSetRenderMode(gDisplayListHead[1]++, G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2);

    gDPSetAlphaCompare(gDisplayListHead[1]++, G_AC_NONE);

    gSPSetGeometryMode(gDisplayListHead[1]++, G_ZBUFFER);
}

// 0x800FCDEC
void efDisplayMakeBlendCLD(void)
{
    gcAddGObjDisplay(gcMakeGObjSPAfter(nOMObjCommonKindEffect, NULL, nOMObjCommonLinkIDEffect, GOBJ_LINKORDER_DEFAULT), efDisplayProcDrawBlendCLD, 15, 3, -1);
    gcAddGObjDisplay(gcMakeGObjSPAfter(nOMObjCommonKindEffect, NULL, nOMObjCommonLinkIDEffect, GOBJ_LINKORDER_DEFAULT), efDisplayProcDrawBlendCLD, 18, 3, -1);
}

// 0x800FCE6C
void efDisplayMakeXLU(void)
{
    gcAddGObjDisplay(gcMakeGObjSPAfter(nOMObjCommonKindEffect, NULL, nOMObjCommonLinkIDEffect, GOBJ_LINKORDER_DEFAULT), efDisplayProcDrawXLU, 15, 0, -1);
    gcAddGObjDisplay(gcMakeGObjSPAfter(nOMObjCommonKindEffect, NULL, nOMObjCommonLinkIDEffect, GOBJ_LINKORDER_DEFAULT), efDisplayProcDrawXLU, 18, 0, -1);
}

// 0x800FCEEC
void efDisplayProcDrawZPerspXLU(GObj *effect_gobj)
{
    gDPPipeSync(gDisplayListHead[0]++);

    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_XLU_SURF, G_RM_XLU_SURF2);

    func_ovl0_800D0D34(effect_gobj);

    gDPPipeSync(gDisplayListHead[0]++);

    gDPSetTexturePersp(gDisplayListHead[0]++, G_TP_PERSP);

    gDPSetDepthSource(gDisplayListHead[0]++, G_ZS_PIXEL);

    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x800FCFCC
void efDisplayProcDrawZPerspCLD(GObj *effect_gobj)
{
    gDPPipeSync(gDisplayListHead[0]++);

    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_CLD_SURF, G_RM_CLD_SURF2);

    func_ovl0_800D0D34(effect_gobj);

    gDPPipeSync(gDisplayListHead[0]++);

    gDPSetTexturePersp(gDisplayListHead[0]++, G_TP_PERSP);

    gDPSetDepthSource(gDisplayListHead[0]++, G_ZS_PIXEL);

    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x800FD0AC
void efDisplayProcDrawZPerspAAXLU(GObj *effect_gobj)
{
    gDPPipeSync(gDisplayListHead[0]++);

    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2);

    func_ovl0_800D0D34(effect_gobj);

    gDPPipeSync(gDisplayListHead[0]++);

    gDPSetTexturePersp(gDisplayListHead[0]++, G_TP_PERSP);

    gDPSetDepthSource(gDisplayListHead[0]++, G_ZS_PIXEL);

    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x800FD18C
void efDisplayInitAll(void)
{
    GObj *gobj;

    gobj = gcMakeGObjSPAfter(nOMObjCommonKindEffect, NULL, nOMObjCommonLinkIDEffect, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(gobj, efDisplayProcDrawZPerspCLD, 18, 1, GOBJ_CAMTAG_DEFAULT);
    gobj->cam_mask = (CAMERA_MASK_DLLINK(2) | CAMERA_MASK_DLLINK(0));

    gobj = gcMakeGObjSPAfter(nOMObjCommonKindEffect, NULL, nOMObjCommonLinkIDEffect, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(gobj, efDisplayProcDrawZPerspCLD, 15, 1, GOBJ_CAMTAG_DEFAULT);
    gobj->cam_mask = CAMERA_MASK_DLLINK(1);

    gobj = gcMakeGObjSPAfter(nOMObjCommonKindInterface, NULL, nOMObjCommonLinkIDInterface, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(gobj, efDisplayProcDrawZPerspXLU, 25, GOBJ_DLLINKORDER_DEFAULT, GOBJ_CAMTAG_DEFAULT);
    gobj->cam_mask = CAMERA_MASK_DLLINK(3);

    gobj = gcMakeGObjSPAfter(nOMObjCommonKindEffect, NULL, nOMObjCommonLinkIDEffect, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(gobj, efDisplayProcDrawZPerspAAXLU, 10, GOBJ_DLLINKORDER_DEFAULT, GOBJ_CAMTAG_DEFAULT);
    gobj->cam_mask = CAMERA_MASK_DLLINK(4);

    gEFManagerParticleBankID = efAllocGetAddParticleBankID
    (
        &lEFCommonParticleBankGenLo,
        &lEFCommonParticleBankGenHi,
        &lEFCommonParticleBankTextureLo,
        &lEFCommonParticleBankTextureHi
    );
}
