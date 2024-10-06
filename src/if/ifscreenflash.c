#include <ft/fighter.h>
#include <sc/scene.h>

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x80131A40
gmColAnim sIFScreenFlashColAnim; 

// 0x80131AA4
u8 sIFScreenFlashAlpha;

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80115BF0
void ifScreenFlashSetColAnimID(s32 colanim_id, s32 colanim_duration)
{
    ftParamCheckSetColAnimID(&sIFScreenFlashColAnim, colanim_id, colanim_duration);
}

// 0x80115C20
void ifScreenFlashProcDisplay(GObj *gobj)
{
    gmColAnim *ca = &sIFScreenFlashColAnim;
    s32 alpha;

    if (ca->is_use_maincolor)
    {
        gDPPipeSync(gSYTaskmanDLHeads[0]++);
        gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);
        gDPSetCombineMode(gSYTaskmanDLHeads[0]++, G_CC_PRIMITIVE, G_CC_PRIMITIVE);
        gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);

        alpha = (ca->maincolor.a * sIFScreenFlashAlpha) / 0xFF;

        gDPSetPrimColor(gSYTaskmanDLHeads[0]++, 0, 0, ca->maincolor.r, ca->maincolor.g, ca->maincolor.b, alpha);
        gDPFillRectangle(gSYTaskmanDLHeads[0]++, 10, 10, 310, 230);
        gDPPipeSync(gSYTaskmanDLHeads[0]++);
        gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
        gDPPipeSync(gSYTaskmanDLHeads[0]++);
    }
}

// 0x80115DA8
void ifScreenFlashProcUpdate(GObj *fighter_gobj)
{
    if (ftMainUpdateColAnim(&sIFScreenFlashColAnim, fighter_gobj, FALSE, FALSE) != FALSE)
    {
        ftParamResetColAnim(&sIFScreenFlashColAnim);
    }
}

// 0x80115DE8
void ifScreenFlashMakeInterface(u8 alpha)
{
    sIFScreenFlashAlpha = alpha;

    ftParamResetColAnim(&sIFScreenFlashColAnim);

    if (gSaveData.is_allow_screenflash != FALSE)
    {
        GObj *interface_gobj = gcMakeGObjSPAfter(nOMObjCommonKindInterface, NULL, nOMObjCommonLinkIDInterface, GOBJ_LINKORDER_DEFAULT);

        gcAddGObjDisplay(interface_gobj, ifScreenFlashProcDisplay, 22, GOBJ_DLLINKORDER_DEFAULT, -1);
        gcAddGObjProcess(interface_gobj, ifScreenFlashProcUpdate, nOMObjProcessKindProc, 1);
    }
}
