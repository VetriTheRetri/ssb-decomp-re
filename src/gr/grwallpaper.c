#include <gr/ground.h>
#include <cm/camera.h>
#include <sc/scene.h>

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
void grWallpaperCalcPersp(SObj *wallpaper_sobj)
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
    wallpaper_sobj->sprite.scalex = wallpaper_sobj->sprite.scaley = scale;

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
    wallpaper_sobj->pos.x = pos_x;
    wallpaper_sobj->pos.y = pos_y;
}

// 0x80104830
void grWallpaperCommonUpdatePersp(GObj *wallpaper_gobj)
{
    grWallpaperCalcPersp(SObjGetStruct(wallpaper_gobj));
}

// 0x80104850
void grWallpaperCommonMakeSObj(void)
{
    GObj *wallpaper_gobj;
    SObj *wallpaper_sobj;

    sGRWallpaperGObj = wallpaper_gobj = lbCommonMakeSpriteGObj
    (
        nOMObjCommonKindWallpaper,
        NULL,
        nOMObjCommonLinkIDWallpaper,
        GOBJ_LINKORDER_DEFAULT,
        lbCommonDrawSObjAttr,
        0,
        GOBJ_DLLINKORDER_DEFAULT,
        GOBJ_CAMTAG_DEFAULT,
        gMPCollisionGroundData->wallpaper,
        nOMObjProcessKindProc,
        grWallpaperCommonUpdatePersp,
        3
    );
    wallpaper_sobj = SObjGetStruct(wallpaper_gobj);

    wallpaper_sobj->pos.x = 10.0F;
    wallpaper_sobj->pos.y = 10.0F;

    wallpaper_sobj->sprite.attr = SP_TEXSHUF;
    wallpaper_sobj->sprite.scalex = wallpaper_sobj->sprite.scaley = 1.004F;
}

// 0x801048F8
void grWallpaperStaticMakeSObj(void)
{
    GObj *wallpaper_gobj;
    SObj *wallpaper_sobj;

    sGRWallpaperGObj = wallpaper_gobj = lbCommonMakeSpriteGObj
    (
        nOMObjCommonKindWallpaper, 
        NULL, 
        nOMObjCommonLinkIDWallpaper,
        GOBJ_LINKORDER_DEFAULT, 
        lbCommonDrawSObjAttr,
        0, 
        GOBJ_DLLINKORDER_DEFAULT, 
        -1, 
        gMPCollisionGroundData->wallpaper, 
        nOMObjProcessKindProc, 
        NULL, 
        3
    );
    wallpaper_sobj = SObjGetStruct(wallpaper_gobj);

    wallpaper_sobj->pos.x = 10.0F;
    wallpaper_sobj->pos.y = 10.0F;

    wallpaper_sobj->sprite.attr = SP_TEXSHUF | SP_FASTCOPY;
    wallpaper_sobj->sprite.scalex = wallpaper_sobj->sprite.scaley = 1.0F;
}

// 0x80104998
void grWallpaperSectorUpdatePersp(GObj *wallpaper_gobj)
{
    Camera *cam;
    SObj *wallpaper_sobj;
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

        wallpaper_sobj = SObjGetStruct(wallpaper_gobj);

        wallpaper_sobj->sprite.scalex = wallpaper_sobj->sprite.scaley = temp;

        wallpaper_sobj->pos.x = 10.0F - (300.0F * scale);
        wallpaper_sobj->pos.y = 10.0F - (220.0F * scale);
    }
}

// 0x80104ABC
void grWallpaperSectorMakeSObj(void)
{
    GObj *wallpaper_gobj;
    SObj *wallpaper_sobj;

    sGRWallpaperGObj = wallpaper_gobj = gcMakeGObjSPAfter(nOMObjCommonKindWallpaper, NULL, nOMObjCommonLinkIDWallpaper, GOBJ_LINKORDER_DEFAULT);

    gcAddGObjDisplay(wallpaper_gobj, lbCommonDrawSObjAttr, 0, GOBJ_DLLINKORDER_DEFAULT, GOBJ_CAMTAG_DEFAULT);

    wallpaper_sobj = lbCommonMakeSObjForGObj(wallpaper_gobj, gMPCollisionGroundData->wallpaper);

    wallpaper_sobj->pos.x = 10.0F;
    wallpaper_sobj->pos.y = 10.0F;

    wallpaper_sobj->sprite.attr = SP_TEXSHUF;

    gcAddGObjProcess(wallpaper_gobj, grWallpaperSectorUpdatePersp, nOMObjProcessKindProc, 3);
}

// 0x80104B58
void grWallpaperBonus3AddDL(GObj *wallpaper_gobj)
{
    gSPDisplayList(gSYTaskDLHeads[0]++, dGRWallpaperDisplayList);
}

// 0x80104B88
void grWallpaperBonus3MakeSObj(void)
{
    GObj *wallpaper_gobj;

    sGRWallpaperGObj = wallpaper_gobj = gcMakeGObjSPAfter(nOMObjCommonKindWallpaper, NULL, nOMObjCommonLinkIDWallpaper, GOBJ_LINKORDER_DEFAULT);

    gcAddGObjDisplay(wallpaper_gobj, grWallpaperBonus3AddDL, 0, GOBJ_DLLINKORDER_DEFAULT, GOBJ_CAMTAG_DEFAULT);
}

// 0x80104BDC
void grWallpaperMakeGroundWallpaper(void)
{
    if (gSceneData.scene_current == nSCKind1PTraining)
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
        sc1PGameBossInitWallpaper();
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
            gcResumeProcessAll(gobj);
        }
        gobj = gobj->link_next;
    }
}
