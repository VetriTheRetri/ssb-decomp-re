#include <gr/ground.h>
#include <cm/camera.h>
#include <gm/battle.h>

extern void func_ovl0_800CCF00(GObj*);

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x801313D0
ub8 sGRWallpaperIsPausePerspUpdate;

// 0x801313D4
s32 sGRWallpaperPad801313D4;

// 0x801313D8
GObj *sGRWallpaperGObj;

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x8012E7C0
Gfx dGRWallpaperDisplayList[/* */] =
{
    gsDPSetCycleType(G_CYC_FILL),
    gsDPSetRenderMode(G_RM_NOOP, G_RM_NOOP2),
    gsDPSetFillColor(GCOMBINE32_RGBA5551(GPACK_RGBA5551(0x00, 0x00, 0x00, 0x01))),
    gsDPFillRectangle(10, 10, 310, 230), // 10 less than width and height?
    gsDPPipeSync(),
    gsDPSetCycleType(G_CYC_1CYCLE),
    gsDPSetRenderMode(G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2),
    gsSPEndDisplayList()
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80104620 - Calculate perspective of stage background image?
void grWallpaperCalcPersp(SObj *bg_sobj)
{
    f32 mag;
    Camera *cam;
    Vec2f sp58;
    Vec3f sp4C;
    f32 bak_pos_x;
    f32 bak_pos_y;
    f32 pos_x;
    f32 pos_y;
    f32 neg;
    f32 width;
    f32 height;
    f32 scale;

    cam = CameraGetStruct(gCMManagerCameraGObj);

    lbVector_Vec3fSubtract(&sp4C, &cam->vec.eye, &cam->vec.at);

    mag = lbVector_Vec3fMagnitude(&sp4C);

    if (sp4C.z < 0.0F)
    {
        sp58.x = 0.0F;
        sp58.y = 0.0F;
    }
    else
    {
        sp58.y = atan2f(sp4C.x, sp4C.z);
        sp58.x = atan2f(sp4C.y, sp4C.z);
    }
    scale = 20000.0F / (mag + 8000.0F);

    if (scale < 1.004F)
    {
        scale = 1.004F;
    }
    else if (scale > 2.0F)
    {
        scale = 2.0F;
    }
    bg_sobj->sprite.scalex = bg_sobj->sprite.scaley = scale;

    width = 300.0F * scale;     // Background image width  is 300px 
    height = 220.0F * scale;    // Background image height is 220px

    // Remember to make a macro for default resolution if one does not yet exist
    pos_x = bak_pos_x = ((sp58.y / F_CST_DTOR32(180.0F)) * width) - ((width - 320.0F) * 0.5F);      // Ultra64 default width  is 320px
    pos_y = bak_pos_y = ((-sp58.x / F_CST_DTOR32(180.0F)) * height) - ((height - 240.0F) * 0.5F);   // Ultra64 default height is 240px

    if (bak_pos_x > 10.0F)
    {
        pos_x = 10.0F;
    }
    else
    {
        neg = (-width - 10.0F) + 320.0F;

        if (bak_pos_x < neg)
        {
            pos_x = neg;
        }
    }
    if (bak_pos_y > 10.0F)
    {
        pos_y = 10.0F;
    }
    else
    {
        neg = (-height - 10.0F) + 240.0F;

        if (bak_pos_y < neg)
        {
            pos_y = neg;
        }
    }
    bg_sobj->pos.x = pos_x;
    bg_sobj->pos.y = pos_y;
}

// 0x80104830
void grWallpaperCommonUpdatePersp(GObj *bg_gobj)
{
    grWallpaperCalcPersp(SObjGetStruct(bg_gobj));
}

// 0x80104850
void grWallpaperCommonMakeSObj(void)
{
    GObj *bg_gobj;
    SObj *bg_sobj;

    sGRWallpaperGObj = bg_gobj = func_ovl0_800CD050
    (
        nOMObjCommonKindWallpaper, 
        NULL, 
        nOMObjCommonLinkIDWallpaper,
        GOBJ_LINKORDER_DEFAULT, 
        func_ovl0_800CCF00,
        0, 
        GOBJ_DLLINKORDER_DEFAULT, 
        -1, 
        gMPCollisionGroundData->wallpaper, 
        1, 
        grWallpaperCommonUpdatePersp, 
        3
    );
    bg_sobj = SObjGetStruct(bg_gobj);

    bg_sobj->pos.x = 10.0F;
    bg_sobj->pos.y = 10.0F;

    bg_sobj->sprite.attr = SP_TEXSHUF;
    bg_sobj->sprite.scalex = bg_sobj->sprite.scaley = 1.004F;
}

// 0x801048F8
void grWallpaperStaticMakeSObj(void)
{
    GObj *bg_gobj;
    SObj *bg_sobj;

    sGRWallpaperGObj = bg_gobj = func_ovl0_800CD050
    (
        nOMObjCommonKindWallpaper, 
        NULL, 
        nOMObjCommonLinkIDWallpaper,
        GOBJ_LINKORDER_DEFAULT, 
        func_ovl0_800CCF00,
        0, 
        GOBJ_DLLINKORDER_DEFAULT, 
        -1, 
        gMPCollisionGroundData->wallpaper, 
        1, 
        NULL, 
        3
    );
    bg_sobj = SObjGetStruct(bg_gobj);

    bg_sobj->pos.x = 10.0F;
    bg_sobj->pos.y = 10.0F;

    bg_sobj->sprite.attr = SP_TEXSHUF | SP_FASTCOPY;
    bg_sobj->sprite.scalex = bg_sobj->sprite.scaley = 1.0F;
}

// 0x80104998
void grWallpaperSectorUpdatePersp(GObj *bg_gobj)
{
    Camera *cam;
    SObj *bg_sobj;
    f32 sqrt;
    Vec3f sp28;
    f32 temp;
    f32 scale;

    cam = gCMManagerCameraGObj->obj;

    lbVector_Vec3fSubtract(&sp28, &cam->vec.eye, &cam->vec.at);

    sqrt = sqrtf(SQUARE(sp28.x) + SQUARE(sp28.y) + SQUARE(sp28.z));

    if (sqrt > 0.0F)
    {
        temp = 20000.0F / (sqrt + 10000.0F);

        if (temp < 1.004F)
        {
            temp = 1.004F;
        }
        else if (temp > 2.0F)
        {
            temp = 2.0F;
        }
        scale = (temp - 1.0F) * 0.5F;

        bg_sobj = SObjGetStruct(bg_gobj);

        bg_sobj->sprite.scalex = bg_sobj->sprite.scaley = temp;

        bg_sobj->pos.x = 10.0F - (300.0F * scale);
        bg_sobj->pos.y = 10.0F - (220.0F * scale);
    }
}

// 0x80104ABC
void grWallpaperSectorMakeSObj(void)
{
    GObj *bg_gobj;
    SObj *bg_sobj;

    sGRWallpaperGObj = bg_gobj = omMakeGObjSPAfter(nOMObjCommonKindWallpaper, NULL, nOMObjCommonLinkIDWallpaper, GOBJ_LINKORDER_DEFAULT);

    omAddGObjRenderProc(bg_gobj, func_ovl0_800CCF00, 0, GOBJ_DLLINKORDER_DEFAULT, -1);

    bg_sobj = gcAppendSObjWithSprite(bg_gobj, gMPCollisionGroundData->wallpaper);

    bg_sobj->pos.x = 10.0F;
    bg_sobj->pos.y = 10.0F;

    bg_sobj->sprite.attr = SP_TEXSHUF;

    omAddGObjCommonProc(bg_gobj, grWallpaperSectorUpdatePersp, nOMObjProcessKindProc, 3);
}

// 0x80104B58
void grWallpaperBonus3AddDL(GObj *bg_gobj)
{
    gSPDisplayList(gDisplayListHead[0]++, dGRWallpaperDisplayList);
}

// 0x80104B88
void grWallpaperBonus3MakeSObj(void)
{
    GObj *bg_gobj;

    sGRWallpaperGObj = bg_gobj = omMakeGObjSPAfter(nOMObjCommonKindWallpaper, NULL, nOMObjCommonLinkIDWallpaper, GOBJ_LINKORDER_DEFAULT);

    omAddGObjRenderProc(bg_gobj, grWallpaperBonus3AddDL, 0, GOBJ_DLLINKORDER_DEFAULT, -1);
}

// 0x80104BDC
void grWallpaperMakeGroundWallpaper(void)
{
    if (gSceneData.scene_current == scMajor_Kind_1PTrainingMode)
    {
        scTrainingMode_SetBackgroundSprite();
        grWallpaperStaticMakeSObj();
    }
    else if (gBattleState->gr_kind >= nGRKindBonusGameStart)
    {
        grWallpaperStaticMakeSObj();
    }
    else switch (gBattleState->gr_kind)
    {
    case nGRKindYoster:
    case nGRKindYosterSmall:
        grWallpaperStaticMakeSObj();
        break;

    case nGRKindSector:
        grWallpaperSectorMakeSObj();
        break;

    case nGRKindBonus3:
        grWallpaperBonus3MakeSObj();
        break;

    case nGRKindLast:
        gm1PGameBossInitBackgroundMain();
        grWallpaperCommonMakeSObj();
        break;

    default:
        grWallpaperCommonMakeSObj();
        break;
    }
}

// 0x80104CB4
void grWallpaperSetPausePerspUpdate(void)
{
    sGRWallpaperIsPausePerspUpdate = TRUE; // ??? Runs when the game is paused
}

// 0x80104CC4
void grWallpaperResetPausePerspUpdate(void)
{
    sGRWallpaperIsPausePerspUpdate = FALSE; // Similarly, this runs when the game is unpaused
}

// 0x80104CD0 - New file?
void grWallpaperRunGObjProcess(void)
{
    GObjProcess *gobjproc = sGRWallpaperGObj->gobjproc_head;

    while (gobjproc != NULL)
    {
        if (gobjproc->is_paused == FALSE)
        {
            if (gobjproc->proc_thread != NULL)
            {
                gobjproc->proc_thread(gobjproc->parent_gobj);
            }
        }
        gobjproc = gobjproc->link_next;
    }
}

// 0x80104D30
void func_ovl2_80104D30(void)
{
    GObj *gobj = gOMObjCommonLinks[nOMObjCommonLinkIDWallpaper];

    while (gobj != NULL)
    {
        if (gobj->gobj_id == nOMObjCommonKindWallpaper)
        {
            func_8000B2B8(gobj);
        }
        gobj = gobj->link_next;
    }
}
