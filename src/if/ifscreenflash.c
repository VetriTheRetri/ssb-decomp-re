#include <ft/fighter.h>
#include <gm/battle.h>

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
    gmColAnimCheckSetID(&sIFScreenFlashColAnim, colanim_id, colanim_duration);
}

// 0x80115C20
void ifScreenFlashProcRender(GObj *gobj)
{
    gmColAnim *ca = &sIFScreenFlashColAnim;
    s32 alpha;

    if (ca->is_use_maincolor)
    {
        gDPPipeSync(gDisplayListHead[0]++);
        gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
        gDPSetCombineMode(gDisplayListHead[0]++, G_CC_PRIMITIVE, G_CC_PRIMITIVE);
        gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);

        alpha = (ca->maincolor.a * sIFScreenFlashAlpha) / 0xFF;

        gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, ca->maincolor.r, ca->maincolor.g, ca->maincolor.b, alpha);
        gDPFillRectangle(gDisplayListHead[0]++, 10, 10, 310, 230);
        gDPPipeSync(gDisplayListHead[0]++);
        gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
        gDPPipeSync(gDisplayListHead[0]++);
    }
}

// 0x80115DA8
void ifScreenFlashProcUpdate(GObj *fighter_gobj)
{
    if (ftMainUpdateColAnim(&sIFScreenFlashColAnim, fighter_gobj, FALSE, FALSE) != FALSE)
    {
        caResetColAnim(&sIFScreenFlashColAnim);
    }
}

// 0x80115DE8
void ifScreenFlashMakeInterface(u8 alpha)
{
    sIFScreenFlashAlpha = alpha;

    caResetColAnim(&sIFScreenFlashColAnim);

    if (gSaveData.is_allow_screenflash != FALSE)
    {
        GObj *interface_gobj = omMakeGObjSPAfter(GObj_Kind_Interface, NULL, GObj_LinkID_Interface, GOBJ_LINKORDER_DEFAULT);

        omAddGObjRenderProc(interface_gobj, ifScreenFlashProcRender, 22, GOBJ_DLLINKORDER_DEFAULT, -1);
        omAddGObjCommonProc(interface_gobj, ifScreenFlashProcUpdate, GObjProcess_Kind_Proc, 1);
    }
}