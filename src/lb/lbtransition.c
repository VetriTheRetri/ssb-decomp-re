#include <lb/library.h>

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x800D6460
s32 sLBTransitionFadeAlphaMax;

// 0x800D6464
s32 sLBTransitionFadeAlphaCurrent;

// 0x800D6468
s32 sLBTransitionFadeLength;

// 0x800D646C
syColorRGBA sLBTransitionColor;

// 0x800D6470
sb32* sLBTransitionIsProceedScene;

// 0x800D6474
sb32 sLBTransitionIsEjectGObj;

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x800D3E80
void lbTransitionProcUpdate(GObj *gobj)
{
    if (sLBTransitionFadeAlphaCurrent < sLBTransitionFadeAlphaMax)
    {
        sLBTransitionFadeAlphaCurrent++;
    }
    if (sLBTransitionFadeLength != 0)
    {
        sLBTransitionFadeLength--;
        
        if (sLBTransitionFadeLength == 0)
        {
            if (sLBTransitionIsProceedScene != NULL)
            {
                *sLBTransitionIsProceedScene = TRUE;
            }
            if (sLBTransitionIsEjectGObj != FALSE)
            {
                gcEjectGObj(gobj);
            }
        }
    }
}

// 0x800D3F08
void lbTransitionProcDraw(GObj *gobj)
{
    s32 alpha = ((f32) sLBTransitionFadeAlphaCurrent / (f32) sLBTransitionFadeAlphaMax) * 255.0F;
    
    if (sLBTransitionColor.a == 0)
    {
        alpha = 0xFF - alpha;
    }
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
    gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, sLBTransitionColor.r, sLBTransitionColor.g, sLBTransitionColor.b, alpha);
    gDPSetCombineMode(gDisplayListHead[0]++, G_CC_PRIMITIVE, G_CC_PRIMITIVE);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_CLD_SURF, G_RM_CLD_SURF2);
    gDPFillRectangle(gDisplayListHead[0]++, 10, 10, 310, 230);
    gDPPipeSync(gDisplayListHead[0]++);
}

// 0x800D4060
void lbTransitionMakeActor(u32 id, s32 link, u32 link_order, syColorRGBA *color, s32 fade_length, sb32 is_eject_gobj, sb32 *is_proceed_scene)
{
    GObj *gobj = gcMakeGObjSPAfter(id, NULL, link, GOBJ_LINKORDER_DEFAULT);

    func_80009F74(gobj, lbTransitionProcDraw, link_order, 0, -1);
    gcAddGObjProcess(gobj, lbTransitionProcUpdate, nOMObjProcessKindProc, 0);
    
    sLBTransitionColor = *color;
    sLBTransitionFadeAlphaMax = fade_length;
    sLBTransitionFadeAlphaCurrent = 0;
    sLBTransitionFadeLength = fade_length + 2;
    sLBTransitionIsEjectGObj = is_eject_gobj;
    sLBTransitionIsProceedScene = is_proceed_scene;
}
