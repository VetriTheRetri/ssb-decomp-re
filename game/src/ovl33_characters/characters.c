#include <sys/develop.h>
// #include <ft/ftdef.h>
#include <ft/fighter.h>
#include <gm/battle.h>
#include <gr/ground.h>
#include <mn/menu.h>
#include <ovl0/reloc_data_mgr.h>
#include <characters.h>

// ovl1 stuff
extern f32 menu_zoom[12]; // D_ovl1_80390D90

// ovl33 stuff
extern s32 dMNCharsFtKinds[12] = {
    Ft_Kind_Mario,
    Ft_Kind_Luigi,
    Ft_Kind_Donkey,
    Ft_Kind_Link,
    Ft_Kind_Samus,
    Ft_Kind_Yoshi,
    Ft_Kind_Kirby,
    Ft_Kind_Fox,
    Ft_Kind_Pikachu,
    Ft_Kind_Purin,
    Ft_Kind_Captain,
    Ft_Kind_Ness
}; // 0x80136250
extern s32 dMNCharsIndexes[12] = {0, 7, 2, 4, 1, 3, 5, 10, 6, 8, 9, 11}; // 0x80136280
extern intptr_t dMNCharsBioOffsets[12] = {0xACA8, 0xD128, 0xF5A8, 0x11A28, 0x13EA8, 0x16328, 0x187A8, 0x1AC28, 0x1D0A8, 0x1F528, 0x219A8, 0x23E28}; // 0x801362B0
extern intptr_t dMNCharsLogoOffsets[12]; // 0x801362E0
extern intptr_t dMNCharsLogoZoomAnimOffsets[12]; // 0x80136310
extern intptr_t dMNCharsLogoColorAnimOffsets[12]; // 0x80136340
extern Vec2f dMNCharsNameXYPositions[12]; // 0x80136370
extern intptr_t dMNCharsNameOffsets[12]; // 0x801363D0
extern intptr_t dMNCharsWorksOffsets[12]; // 0x80136400
extern charsSpecialActionInfo* dMNCharsSpecialActions[12]; // 0x80136430

extern RldmFileId D_ovl33_80136228[4];

extern scUnkDataBounds D_ovl33_801364FC;
extern scRuntimeInfo D_ovl33_80136518;

extern s32 gMNCharsCurrentIndex; // 0x801365F8
extern GObj* gMNCharsSeriesLogoGObj; // 0x801365FC
extern GObj* gMNCharsNameGObj; // 0x80136600
extern GObj* gMNCharsBioGObj; // 0x80136604
extern GObj* gMNCharsWorksGObj; // 0x80136608
extern GObj* gMNCharsFighterGObj; // 0x8013660C

extern s32 gMNCharsActionType; // 0x801366C4
extern s32 gMNCharsAnimFramesRemaining; // 0x801366C8
extern sb32 gMNCharsUseAnimFramesRemaining; // 0x801366CC
extern sb32 gMNCharsAutoRotateFighter; // 0x801366D0
extern s32 gMNCharsUnknown; // 0x801366D4

extern GObj* gMNCharsMoveNameGObj; // 0x801366DC
extern GObj* gMNCharsFighterCameraGObj; // 0x801366E0

extern void* gMNCharsAnimHeap; // 0x801366EC
extern sb32 gMNCharsIsDemoMode; // 0x801366F0
extern s32 gMNCharsFirstFtKind; // 0x801366F4
extern s32 gMNCharsSecondFtKind; // 0x801366F8
extern s32 gMNCharsCurrentActionTrack; // 0x801366FC
extern u16 gMNCharsUnlockedMask; // 0x80136700
extern s32 gMNCharsCurrentAnimFrame; // 0x80136704
extern s32 gMNCharsRecentActionTypes[3]; // 0x80136708
extern s32 gMNCharsRecentActionTypeIndex; // 0x80136714
extern s32 gMNCharsChangeWait; // 0x80136718
extern s32 gMNCharsFramesElapsed; // 0x8013671C; // frames elapsed

extern u32 D_ovl33_80136720[240];
extern rdFileNode D_ovl33_80136A40;
extern uintptr_t D_NF_001AC870;
extern uintptr_t D_NF_00000854;

extern s32 gMNCharsFilesArray[4]; // 0x80136A78[4]
// gMNCharsFilesArray[0] - D_ovl33_80136A78; // file 0x010 pointer
// gMNCharsFilesArray[1] - D_ovl33_80136A7C; // file 0x020 pointer
// gMNCharsFilesArray[2] - D_ovl33_80136A80; // file 0x014 pointer - unused
// gMNCharsFilesArray[3] - D_ovl33_80136A84; // file 0x023 pointer

// Offsets
extern intptr_t FILE_010_BIO_UNDERLAY_TEXTURE_IMAGE_OFFSET = 0x30888; // file 0x010 image offset for rectangle underlaying bios
extern intptr_t FILE_010_CHARACTERS_TEXTURE_IMAGE_OFFSET = 0x630; // file 0x010 image offset for Characters texture

extern intptr_t FILE_020_DATA_HEADER_IMAGE_OFFSET = 0xB40; // file 0x020 image offset for DATA header
extern intptr_t FILE_020_LEFT_ARROW_IMAGE_OFFSET = 0xBE0; // file 0x020 image offset for left arrow
extern intptr_t FILE_020_RIGHT_ARROW_IMAGE_OFFSET = 0xC80; // file 0x020 image offset for right arrow

// 0x80131B00
void mnCharsSetupDisplayList(Gfx **display_list)
{
    gSPSetGeometryMode(display_list[0]++, G_LIGHTING);
    ftRender_Lights_DisplayLightReflect(display_list, func_ovl1_8039051C(), func_ovl1_80390528());
}

// 0x80131B58
s32 mnCharsGetFtKind(s32 index)
{
    s32 kinds[12] = dMNCharsFtKinds;
    return kinds[index];
}

// 0x80131BA8
s32 mnCharsGetIndex(s32 ft_kind)
{
    s32 indexes[12] = dMNCharsIndexes;
    return indexes[ft_kind];
}

// 0x80131BF8 - Unused?
void func_ovl33_80131BF8()
{
    return;
}

// 0x80131C00
void mnCharsCreateBio(s32 ft_kind)
{
    GObj* bio_gobj;
    SObj* bio_sobj;
    intptr_t offsets[12] = dMNCharsBioOffsets;

    gMNCharsBioGObj = bio_gobj = omMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
    omAddGObjRenderProc(bio_gobj, func_ovl0_800CCF00, 0x1A, 0x80000000, -1);

    bio_sobj = gcAppendSObjWithSprite(bio_gobj, GetAddressFromOffset(gMNCharsFilesArray[0], &FILE_010_BIO_UNDERLAY_TEXTURE_IMAGE_OFFSET));
    bio_sobj->sprite.attr &= ~SP_FASTCOPY;
    bio_sobj->sprite.attr |= SP_TRANSPARENT;
    bio_sobj->sprite.red = 0;
    bio_sobj->sprite.green = 0;
    bio_sobj->sprite.blue = 0;
    bio_sobj->pos.x = 126.0f;
    bio_sobj->pos.y = 54.0f;

    bio_sobj = gcAppendSObjWithSprite(bio_gobj, GetAddressFromOffset(gMNCharsFilesArray[0], offsets[ft_kind]));
    bio_sobj->sprite.attr &= ~SP_FASTCOPY;
    bio_sobj->sprite.attr |= SP_TRANSPARENT;
    bio_sobj->sprite.red = 0xFF;
    bio_sobj->sprite.green = 0xFF;
    bio_sobj->sprite.blue = 0xFF;
    bio_sobj->pos.x = 126.0f;
    bio_sobj->pos.y = 54.0f;
}

// 0x80131D44
void mnCharsCreateHeader()
{
    GObj* header_gobj;
    SObj* header_sobj;

    header_gobj = omMakeGObjSPAfter(0, 0, 0x12, 0x80000000);
    omAddGObjRenderProc(header_gobj, func_ovl0_800CCF00, 0x1B, 0x80000000, -1);

    // DATA header
    header_sobj = gcAppendSObjWithSprite(header_gobj, GetAddressFromOffset(gMNCharsFilesArray[1], &FILE_020_DATA_HEADER_IMAGE_OFFSET));
    header_sobj->sprite.attr &= ~SP_FASTCOPY;
    header_sobj->sprite.attr |= SP_TRANSPARENT;
    header_sobj->pos.x = 23.0f;
    header_sobj->pos.y = 17.0f;
    header_sobj->sprite.red = 0x5F;
    header_sobj->sprite.green = 0x58;
    header_sobj->sprite.blue = 0x46;

    // Characters header
    header_sobj = gcAppendSObjWithSprite(header_gobj, GetAddressFromOffset(gMNCharsFilesArray[0], &FILE_010_CHARACTERS_TEXTURE_IMAGE_OFFSET));
    header_sobj->sprite.attr &= ~SP_FASTCOPY;
    header_sobj->sprite.attr |= SP_TRANSPARENT;
    header_sobj->pos.x = 157.0f;
    header_sobj->pos.y = 23.0f;
    header_sobj->sprite.red = 0xF2;
    header_sobj->sprite.green = 0xC7;
    header_sobj->sprite.blue = 0xD;
    header_sobj->shadow_color.r = 0;
    header_sobj->shadow_color.g = 0;
    header_sobj->shadow_color.b = 0;

    // left arrow
    header_sobj = gcAppendSObjWithSprite(header_gobj, GetAddressFromOffset(gMNCharsFilesArray[1], &FILE_020_LEFT_ARROW_IMAGE_OFFSET));
    header_sobj->sprite.attr &= ~SP_FASTCOPY;
    header_sobj->sprite.attr |= SP_TRANSPARENT;
    header_sobj->pos.x = 257.0f;
    header_sobj->pos.y = 40.0f;
    header_sobj->sprite.red = 0xE3;
    header_sobj->sprite.green = 0x7D;
    header_sobj->sprite.blue = 0xC;

    // right arrow
    header_sobj = gcAppendSObjWithSprite(header_gobj, GetAddressFromOffset(gMNCharsFilesArray[1], &FILE_020_RIGHT_ARROW_IMAGE_OFFSET));
    header_sobj->sprite.attr &= ~SP_FASTCOPY;
    header_sobj->sprite.attr |= SP_TRANSPARENT;
    header_sobj->pos.x = 275.0f;
    header_sobj->pos.y = 40.0f;
    header_sobj->sprite.red = 0xE3;
    header_sobj->sprite.green = 0x7D;
    header_sobj->sprite.blue = 0xC;
}

// 0x80131F28
void mnCharsCreateSeriesLogo(s32 ft_kind)
{
    GObj* series_logo_gobj;
    intptr_t offsets[12] = dMNCharsLogoOffsets;
    intptr_t zoom_offsets[12] = dMNCharsLogoZoomAnimOffsets;
    intptr_t color_offsets[12] = dMNCharsLogoColorAnimOffsets;

    gMNCharsSeriesLogoGObj = series_logo_gobj = omMakeGObjSPAfter(0, 0, 0x13, 0x80000000);
    func_8000F120(series_logo_gobj, GetAddressFromOffset(gMNCharsFilesArray[3], offsets[ft_kind]), 0);
    omAddGObjRenderProc(series_logo_gobj, odRenderDObjTreeForGObj, 0x1C, 0x80000000, -1);
    func_8000F8F4(series_logo_gobj, GetAddressFromOffset(gMNCharsFilesArray[3], zoom_offsets[ft_kind]));
    func_8000BE28(series_logo_gobj, GetAddressFromOffset(gMNCharsFilesArray[3], color_offsets[ft_kind]), 4.0F);
    func_8000DF34(series_logo_gobj);

    DObjGetStruct(series_logo_gobj)->translate.vec.f.x = -350.0f;
    DObjGetStruct(series_logo_gobj)->translate.vec.f.y = 200.0f;
    DObjGetStruct(series_logo_gobj)->translate.vec.f.z = 0.0f;
    DObjGetStruct(series_logo_gobj)->scale.vec.f.x = 1.7f;
    DObjGetStruct(series_logo_gobj)->scale.vec.f.y = 1.7f;
}

// 0x801320E4
void mnCharsCreateName(s32 ft_kind)
{
    GObj* name_gobj;
    SObj* name_sobj;
    Vec2f coords[12] = dMNCharsNameXYPositions;
    intptr_t offsets[12] = dMNCharsNameOffsets;

    gMNCharsNameGObj = name_gobj = omMakeGObjSPAfter(0, 0, 0x14, 0x80000000);
    omAddGObjRenderProc(name_gobj, func_ovl0_800CCF00, 0x1D, 0x80000000, -1);

    if ((ft_kind == Ft_Kind_Purin) || (ft_kind == Ft_Kind_Captain))
    {
        name_sobj = gcAppendSObjWithSprite(name_gobj, GetAddressFromOffset(gMNCharsFilesArray[0], &D_NF_000028F0));
        name_sobj->sprite.attr &= ~SP_FASTCOPY;
        name_sobj->sprite.attr |= SP_TRANSPARENT;
        name_sobj->pos.x = 10.0f;
        name_sobj->pos.y = 44.0f;
        name_sobj->sprite.red = 0x7D;
        name_sobj->sprite.green = 0x45;
        name_sobj->sprite.blue = 0x07;
    }
    else
    {
        name_sobj = gcAppendSObjWithSprite(name_gobj, GetAddressFromOffset(gMNCharsFilesArray[0], &D_NF_00001230));
        name_sobj->sprite.attr &= ~SP_FASTCOPY;
        name_sobj->sprite.attr |= SP_TRANSPARENT;
        name_sobj->pos.x = 10.0f;
        name_sobj->pos.y = 45.0f;
        name_sobj->sprite.red = 0x7D;
        name_sobj->sprite.green = 0x45;
        name_sobj->sprite.blue = 0x07;
    }

    name_sobj = gcAppendSObjWithSprite(name_gobj, GetAddressFromOffset(gMNCharsFilesArray[0], offsets[ft_kind]));
    name_sobj->sprite.attr &= ~SP_FASTCOPY;
    name_sobj->sprite.attr |= SP_TRANSPARENT;
    name_sobj->pos.x = coords[ft_kind].x;
    name_sobj->pos.y = coords[ft_kind].y;
    name_sobj->sprite.red = 0x7D;
    name_sobj->sprite.green = 0x45;
    name_sobj->sprite.blue = 0x07;
}

// 0x801322F0
void mnCharsCreateWorksBackground()
{
    GObj* works_bg_gobj;
    SObj* works_bg_sobj;

    works_bg_gobj = omMakeGObjSPAfter(0, 0, 0x15, 0x80000000);
    omAddGObjRenderProc(works_bg_gobj, func_ovl0_800CCF00, 0x1E, 0x80000000, -1);

    works_bg_sobj = gcAppendSObjWithSprite(works_bg_gobj, GetAddressFromOffset(gMNCharsFilesArray[0], &D_NF_00025058));
    works_bg_sobj->sprite.attr &= ~SP_FASTCOPY;
    works_bg_sobj->sprite.attr |= SP_TRANSPARENT;
    works_bg_sobj->pos.x = 116.0f;
    works_bg_sobj->pos.y = 173.0f;
    works_bg_sobj->sprite.red = 0xCF;
    works_bg_sobj->sprite.green = 0xCF;
    works_bg_sobj->sprite.blue = 0xAE;
}

// 0x8013239C
void mnCharsCreateWorks(s32 ft_kind)
{
    GObj* works_gobj;
    SObj* works_sobj;
    intptr_t works_offsets[12] = dMNCharsWorksOffsets;

    gMNCharsWorksGObj = works_gobj = omMakeGObjSPAfter(0, 0, 0x16, 0x80000000);
    omAddGObjRenderProc(works_gobj, func_ovl0_800CCF00, 0x1F, 0x80000000, -1);

    works_sobj = gcAppendSObjWithSprite(works_gobj, GetAddressFromOffset(gMNCharsFilesArray[0], works_offsets[ft_kind]));
    works_sobj->sprite.attr &= ~SP_FASTCOPY;
    works_sobj->sprite.attr |= SP_TRANSPARENT;
    works_sobj->pos.x = 139.0f;
    works_sobj->pos.y = 180.0f;
    works_sobj->sprite.red = 0xBC;
    works_sobj->sprite.green = 0xBF;
    works_sobj->sprite.blue = 0xFF;
}

// 0x80132494
void mnCharsSetScale(GObj* fighter_gobj, s32 ft_kind)
{
    DObjGetStruct(fighter_gobj)->scale.vec.f.x = menu_zoom[ft_kind];
    DObjGetStruct(fighter_gobj)->scale.vec.f.y = menu_zoom[ft_kind];
    DObjGetStruct(fighter_gobj)->scale.vec.f.z = menu_zoom[ft_kind];
}

// 0x801324CC
void mnCharsSetPosition(GObj* fighter_gobj, s32 ft_kind)
{
    DObjGetStruct(fighter_gobj)->translate.vec.f.x = 0.0f;
    DObjGetStruct(fighter_gobj)->translate.vec.f.y = -100.0f;
    DObjGetStruct(fighter_gobj)->translate.vec.f.z = 0.0f;
}

// 0x801324F8 - Unused?
void func_ovl33_801324F8()
{
    return;
}

// 0x80132500
charsActionInfo* mnCharsGetActionInfo(charsActionInfo* info, s32 ft_kind, s32 action_type, s32 arg3, s32 track)
{
    charsSpecialActionInfo* special_actions[12] = dMNCharsSpecialActions;

    if ((action_type == charsActionKindSpecialHi) || (action_type == charsActionKindSpecialN) || (action_type == charsActionKindSpecialLw))
    {
        *info = special_actions[ft_kind]->info[action_type][track];

        return info;
    }
    else
    {
        if (ft_kind == Ft_Kind_Kirby)
        {
            if ((action_type == 9) || (action_type == 10))
            {
                *info = D_ovl33_80135CD0[track];

                return info;
            }
            else if ((action_type >= 0x1A) && (action_type < 0x1F) && (track == 1))
            {
                *info = D_ovl33_80135D30;

                return info;
            }
        }

        if (ft_kind == Ft_Kind_Purin)
        {
            if ((action_type == 9) || (action_type == 10))
            {
                *info = D_ovl33_80135D3C[track];

                return info;
            }
            else if ((action_type >= 0x1A) && (action_type < 0x1F) && (track == 1))
            {
                *info = D_ovl33_80135D9C;

                return info;
            }
        }

        if (action_type == 0x12)
        {
            *info = D_ovl33_80135DA8.info[ft_kind][track];

            return info;
        }
        else
        {
            *info = D_ovl33_80134E30.info[action_type][track];

            return info;
        }
    }

    return info;
}

// 0x80132768
sb32 mnCharsIsAnimComplete(GObj* fighter_gobj)
{
    if (fighter_gobj->anim_frame == 0.0f) return TRUE;

    return FALSE;
}

// 0x80132794
void mnCharsInitRecentActionTypes()
{
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gMNCharsRecentActionTypes); i++)
    {
        gMNCharsRecentActionTypes[i] = 39;
    }

    gMNCharsRecentActionTypeIndex = 0;
}

// 0x801327C0
sb32 mnCharsIsRecentActionType(s32 action_type)
{
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gMNCharsRecentActionTypes); i++)
    {
        if (action_type == gMNCharsRecentActionTypes[i])
        {
            return TRUE;
        }
    }

    return FALSE;
}

// 0x801327FC
s32 mnCharsGetRandomActionType()
{
    s32 action_type;

    do
    {
        action_type = lbRandom_GetTimeByteRange(39);
    }
    while (mnCharsIsRecentActionType(action_type) != FALSE);

    gMNCharsRecentActionTypes[gMNCharsRecentActionTypeIndex] = action_type;

    if (gMNCharsRecentActionTypeIndex >= 2)
    {
        gMNCharsRecentActionTypeIndex = 0;
    }
    else {
        gMNCharsRecentActionTypeIndex += 1;
    }

    return action_type;
}

// 0x8013286C
charsActionInfo* mnCharsSetActionInfo(charsActionInfo* action_info, s32 action_type)
{
    charsActionInfo action_info_temp;

    mnCharsGetActionInfo(&action_info_temp, mnCharsGetFtKind(gMNCharsCurrentIndex), action_type, gMNCharsUnknown, gMNCharsCurrentActionTrack);

    if (action_info_temp.status_id == 0xA2C2A)
    {
        gMNCharsCurrentAnimFrame += 1;

        if (action_info_temp.anim_length == gMNCharsCurrentAnimFrame)
        {
            gMNCharsActionType = action_type = mnCharsGetRandomActionType();
            gMNCharsCurrentAnimFrame = 0;
        }
        gMNCharsCurrentActionTrack = 0;

        mnCharsGetActionInfo(&action_info_temp, mnCharsGetFtKind(gMNCharsCurrentIndex), action_type, gMNCharsUnknown, gMNCharsCurrentActionTrack);

        *action_info = action_info_temp;

        return action_info;
    }
    else
    {
        *action_info = action_info_temp;

        return action_info;
    }
}

// 0x80132984
charsActionInfo* mnCharsMoveToNextTrack(charsActionInfo* action_info, s32 arg1)
{
    charsActionInfo action_info_temp;

    gMNCharsCurrentActionTrack += 1;

    mnCharsSetActionInfo(&action_info_temp, gMNCharsActionType);

    *action_info = action_info_temp;

    return action_info;
}

// 0x801329E8
void mnCharsUpdateFighter(GObj* fighter_gobj)
{
    charsActionInfo new_action_info;
    charsActionInfo next_action_info;
    ftStruct* ft_struct;

    ft_struct = ftGetStruct(fighter_gobj);

    if (gMNCharsUseAnimFramesRemaining != FALSE)
    {
        if (gMNCharsAnimFramesRemaining != 0)
        {
            gMNCharsAnimFramesRemaining -= 1;
        }
        else
        {
            mnCharsMoveToNextTrack(&new_action_info, mnCharsGetFtKind(gMNCharsCurrentIndex));
            mnCharsGetActionInfo(&next_action_info, mnCharsGetFtKind(gMNCharsCurrentIndex), gMNCharsActionType, gMNCharsUnknown, gMNCharsCurrentActionTrack + 1);

            if (ft_struct->status_info.status_id == 0x31)
            {
                ftCommon_ResetColAnim(fighter_gobj);
            }

            ftMainSetFighterStatus(fighter_gobj, new_action_info.status_id, 0.0f, 1.0f, new_action_info.flags);

            if (new_action_info.status_id == 0x20031)
            {
                func_ovl2_800E9AF4(fighter_gobj, 3);
            }

            mnCharsUpdateMoveName(gMNCharsMoveNameGObj);

            if (new_action_info.anim_length != 0x29A)
            {
                if (next_action_info.status_id == 0xA2C2A)
                {
                    gMNCharsAnimFramesRemaining = new_action_info.anim_length + 0x14;
                }
                else {
                    gMNCharsAnimFramesRemaining = new_action_info.anim_length;
                }

                gMNCharsUseAnimFramesRemaining = TRUE;
            }
            else
            {
                gMNCharsAnimFramesRemaining = 0;
                gMNCharsUseAnimFramesRemaining = FALSE;
            }
        }
    }
    else if (mnCharsIsAnimComplete(fighter_gobj) != FALSE)
    {
        mnCharsGetActionInfo(&new_action_info, mnCharsGetFtKind(gMNCharsCurrentIndex), gMNCharsActionType, gMNCharsUnknown, gMNCharsCurrentActionTrack);
        mnCharsGetActionInfo(&next_action_info, mnCharsGetFtKind(gMNCharsCurrentIndex), gMNCharsActionType, gMNCharsUnknown, gMNCharsCurrentActionTrack + 1);

        if (next_action_info.status_id == 0xA2C2A)
        {
            gMNCharsAnimFramesRemaining = 0x14;
        }
        else
        {
            gMNCharsAnimFramesRemaining = 0;
        }

        gMNCharsUseAnimFramesRemaining = TRUE;
    }

    if (gMNCharsAutoRotateFighter != FALSE)
    {
        DObjGetStruct(fighter_gobj)->rotate.vec.f.y += PI32 / 360.0f;

        if (DOUBLE_PI32 < DObjGetStruct(fighter_gobj)->rotate.vec.f.y)
        {
            DObjGetStruct(fighter_gobj)->rotate.vec.f.y -= DOUBLE_PI32;
        }
    }
}

// 0x80132C40
void mnCharsCreateFighter(s32 ft_kind)
{
    GObj* fighter_gobj;
    ftStruct* ft_struct;
    ftCreateDesc spawn_info = dFTDefaultFighterDesc;
    charsActionInfo action_info;

    spawn_info.ft_kind = mnCharsGetFtKind(gMNCharsCurrentIndex);
    spawn_info.costume = ftCostume_GetIndexFFA(mnCharsGetFtKind(gMNCharsCurrentIndex), 0);
    spawn_info.anim_heap = gMNCharsAnimHeap;
    gMNCharsFighterGObj = fighter_gobj = ftManagerMakeFighter(&spawn_info);

    omAddGObjCommonProc(fighter_gobj, mnCharsUpdateFighter, 1, 1);

    ft_struct = ftGetStruct(fighter_gobj);
    ft_struct->is_playing_sfx = TRUE;

    mnCharsSetScale(fighter_gobj, ft_kind);
    mnCharsSetPosition(fighter_gobj, ft_kind);

    gMNCharsUnknown = 1;

    mnCharsInitRecentActionTypes();

    gMNCharsActionType = mnCharsGetRandomActionType();
    gMNCharsCurrentActionTrack = 0;
    gMNCharsCurrentAnimFrame = 0;

    mnCharsSetActionInfo(&action_info, gMNCharsActionType);

    ftMainSetFighterStatus(fighter_gobj, action_info.status_id, 0.0f, 1.0f, action_info.flags);

    if (action_info.anim_length != 0x29A)
    {
        gMNCharsUseAnimFramesRemaining = TRUE;
        gMNCharsAnimFramesRemaining = action_info.anim_length;
    }
    else
    {
        gMNCharsUseAnimFramesRemaining = FALSE;
        gMNCharsAnimFramesRemaining = 0;
    }

    mnCharsUpdateMoveName(gMNCharsMoveNameGObj);

    gMNCharsAutoRotateFighter = TRUE;
}

// 0x80132DD4
s32 mnCharsGetMoveType()
{
    switch (gMNCharsActionType)
    {
        case 0:
            return 0;
        case 1:
            return 1;
        case 2:
            return 2;
        default:
            return 3;
    }
}

// 0x80132E20
void mnCharsUpdateMoveName(GObj* move_name_gobj)
{
    SObj* move_name_sobj;
    intptr_t move_name_offsets[12][3] = D_ovl33_80136460;
    intptr_t move_input_offsets[3] = D_ovl33_801364F0;
    s32 move_type;
    s32 ft_kind;

    move_type = mnCharsGetMoveType();
    ft_kind = mnCharsGetFtKind(gMNCharsCurrentIndex);
    func_8000B760(move_name_gobj);

    if (move_type != 3)
    {
        move_name_sobj = gcAppendSObjWithSprite(move_name_gobj, GetAddressFromOffset(gMNCharsFilesArray[0], move_input_offsets[move_type]));
        move_name_sobj->sprite.attr &= ~SP_FASTCOPY;
        move_name_sobj->sprite.attr |= SP_TRANSPARENT;
        move_name_sobj->pos.x = 24.0f;
        move_name_sobj->pos.y = 199.0f;
        move_name_sobj->sprite.red = 0xE3;
        move_name_sobj->sprite.green = 0x7D;
        move_name_sobj->sprite.blue = 0xC;

        move_name_sobj = gcAppendSObjWithSprite(move_name_gobj, GetAddressFromOffset(gMNCharsFilesArray[0], move_name_offsets[ft_kind][move_type]));
        move_name_sobj->sprite.attr &= ~SP_FASTCOPY;
        move_name_sobj->sprite.attr |= SP_TRANSPARENT;
        move_name_sobj->pos.x = 24.0f;
        move_name_sobj->pos.y = 210.0f;
        move_name_sobj->sprite.red = 0xE3;
        move_name_sobj->sprite.green = 0x7D;
        move_name_sobj->sprite.blue = 0xC;
    }
}

// 0x80132FA0
void mnCharsCreateMoveName()
{
    GObj* move_name_gobj;

    gMNCharsMoveNameGObj = move_name_gobj = omMakeGObjSPAfter(0, 0, 0x16, 0x80000000);
    omAddGObjRenderProc(move_name_gobj, func_ovl0_800CCF00, 0x1F, 0x80000000, -1);

    mnCharsUpdateMoveName(gMNCharsMoveNameGObj);
}

// 0x80133000
void mnCharsCreateBioViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x46, 0x04000000, -1, 0, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x801330A0
void mnCharsCreateHeaderViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x3C, 0x08000000, -1, 0, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80133140
void mnCharsCreateSeriesLogoViewport()
{
    Camera *cam;
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_80017DBC, 0x5A, 0x10000000, -1, 1, 1, 0, 1, 0);

    cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);

    cam->vec.eye.x = 0.0F;
    cam->vec.eye.y = 0.0F;
    cam->vec.eye.z = 1800.0F;
    cam->vec.at.x = 0.0F;
    cam->vec.at.y = 0.0F;
    cam->vec.at.z = 0.0F;
    cam->vec.up.x = 0.0F;
    cam->vec.up.y = 1.0F;
    cam->vec.up.z = 0.0F;
}

// 0x80133224
void mnCharsCreateNameViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x50, 0x20000000, -1, 0, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x801332C4
void mnCharsCreateWorksBackgroundViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x32, 0x40000000, -1, 0, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80133364
void mnCharsCreateWorksViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x28, 0x80000000, -1, 0, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80133404
void mnCharsCreateFighterViewport()
{
    Camera *cam;

    gMNCharsFighterCameraGObj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_80017DBC, 0x1E, 0x00048600, -1, 1, 1, 0, 1, 0);

    cam = CameraGetStruct(gMNCharsFighterCameraGObj);
    cam->flags = 1;

    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);

    cam->vec.eye.x = 0.0F;
    cam->vec.eye.y = 0.0F;
    cam->vec.eye.z = 3000.0F;
    cam->vec.at.x = 700.0F;
    cam->vec.at.y = 370.0F;
    cam->vec.at.z = 0.0F;
    cam->vec.up.x = 0.0F;
    cam->vec.up.y = 1.0F;
    cam->vec.up.z = 0.0F;
}

// 0x80133510
sb32 mnCharsIsUnlocked(s32 ft_kind)
{
    if ((ft_kind == Ft_Kind_Luigi) ||
        (ft_kind == Ft_Kind_Captain) ||
        (ft_kind == Ft_Kind_Purin) ||
        (ft_kind == Ft_Kind_Ness)
    )
    {
        if (gMNCharsUnlockedMask & gmSaveChrMask(ft_kind))
        {
            return TRUE;
        }
        else return FALSE;
    }
    else return TRUE;
}

// 0x80133568
void mnCharsInitVars()
{
    gMNCharsFramesElapsed = 0;

    gMNCharsSeriesLogoGObj = NULL;
    gMNCharsNameGObj = NULL;
    gMNCharsBioGObj = NULL;
    gMNCharsWorksGObj = NULL;
    gMNCharsFighterGObj = NULL;
    gMNCharsMoveNameGObj = NULL;

    gMNCharsActionType = 0;
    gMNCharsAnimFramesRemaining = 0;
    gMNCharsUseAnimFramesRemaining = FALSE;
    gMNCharsAutoRotateFighter = TRUE;
    gMNCharsUnknown = 1;
    gMNCharsCurrentActionTrack = 0;
    gMNCharsUnlockedMask = gSaveData.character_mask;

    if (gSceneData.scene_previous == scMajor_Kind_Data)
    {
        gMNCharsCurrentIndex = mnCharsGetIndex(gSaveData.data_characters_ft_kind);
        gMNCharsIsDemoMode = FALSE;
    }
    else
    {
        gMNCharsIsDemoMode = TRUE;
        gMNCharsFirstFtKind = gSceneData.demo_ft_kind[0];
        gMNCharsSecondFtKind = gSceneData.demo_ft_kind[1];
        gMNCharsCurrentIndex = mnCharsGetIndex(gMNCharsFirstFtKind);
    }

    mnCharsInitRecentActionTypes();
}

// 0x8013366C
void mnCharsSaveFtKindToSRAM()
{
    gSaveData.data_characters_ft_kind = mnCharsGetFtKind(gMNCharsCurrentIndex);

    lbMemory_SaveData_WriteSRAM();
}

// 0x8013369C
void mnCharsChangeFighter(s32 ft_kind)
    {
    if (gMNCharsSeriesLogoGObj != NULL)
    {
        omEjectGObj(gMNCharsSeriesLogoGObj);
        mnCharsCreateSeriesLogo(ft_kind);
    }
    if (gMNCharsNameGObj != NULL)
    {
        omEjectGObj(gMNCharsNameGObj);
        mnCharsCreateName(ft_kind);
    }
    if (gMNCharsBioGObj != NULL)
    {
        omEjectGObj(gMNCharsBioGObj);
        mnCharsCreateBio(ft_kind);
    }
    if (gMNCharsWorksGObj != NULL)
    {
        omEjectGObj(gMNCharsWorksGObj);
        mnCharsCreateWorks(ft_kind);
    }
    if (gMNCharsFighterGObj != NULL)
    {
        ftManagerDestroyFighter(gMNCharsFighterGObj);
        mnCharsCreateFighter(ft_kind);
    }
}

// 0x80133754
void mnCharsMoveFighterCamera(Camera* fighter_cam, f32 angle, s32 arg2)
{
    f32 theta;
    f32 radians;

    radians = F_DEG_TO_RAD(angle);
    fighter_cam->vec.eye.y = __sinf(radians) * 3000.0f;
    fighter_cam->vec.eye.z = cosf(radians) * 3000.0f;

    theta = atan2f(370.0f, 0) + radians;
    fighter_cam->vec.at.y = __sinf(theta) * 370.0f;
    fighter_cam->vec.at.z = cosf(theta) * 370.0f;

    theta = atan2f(1.0f, 0) + radians;
    fighter_cam->vec.up.y = __sinf(theta);
    fighter_cam->vec.up.z = cosf(theta);
}

// 0x80133840
void mnCharsResetFighterViewport()
{
    Camera *cam = CameraGetStruct(gMNCharsFighterCameraGObj);

    cam->vec.eye.x = 0.0F;
    cam->vec.eye.y = 0.0F;
    cam->vec.eye.z = 3000.0F;
    cam->vec.at.x = 700.0F;
    cam->vec.at.y = 370.0F;
    cam->vec.at.z = 0.0F;
    cam->vec.up.x = 0.0F;
    cam->vec.up.y = 1.0F;
    cam->vec.up.z = 0.0F;

    D_ovl33_801366E4 = 0;
    D_ovl33_801366E8 = 0;
}

// 0x801338AC
void mnCharsHandleInput()
{
    s32 z_held_port;
    s32 stick_range;
    s32 is_button;

    if (func_ovl1_8039076C(START_BUTTON | A_BUTTON) != FALSE)
    {
        // commented out?
    }

    if (func_ovl1_8039076C(B_BUTTON) != FALSE)
    {
        gSceneData.scene_previous = gSceneData.scene_current;
        gSceneData.scene_current = scMajor_Kind_Data;

        mnCharsSaveFtKindToSRAM();
        func_80005C74();
    }

    z_held_port = func_ovl1_80390804(Z_TRIG);

    if (z_held_port != 0)
    {
        z_held_port--;

        if (gPlayerControllers[z_held_port].stick_range.x < -20)
        {
            DObjGetStruct(gMNCharsFighterGObj)->rotate.vec.f.y -= F_CLC_DTOR32(gPlayerControllers[z_held_port].stick_range.x / 60.0f);

            if (DObjGetStruct(gMNCharsFighterGObj)->rotate.vec.f.y > F_CLC_DTOR32(360.0F))
            {
                DObjGetStruct(gMNCharsFighterGObj)->rotate.vec.f.y -= F_CLC_DTOR32(360.0F);
            }

            gMNCharsAutoRotateFighter = FALSE;
        }

        if (gPlayerControllers[z_held_port].stick_range.x > 20)
        {
            DObjGetStruct(gMNCharsFighterGObj)->rotate.vec.f.y -= F_CLC_DTOR32(gPlayerControllers[z_held_port].stick_range.x / 60.0f);

            if (DObjGetStruct(gMNCharsFighterGObj)->rotate.vec.f.y > F_CLC_DTOR32(360.0F))
            {
                DObjGetStruct(gMNCharsFighterGObj)->rotate.vec.f.y -= F_CLC_DTOR32(360.0F);
            }

            gMNCharsAutoRotateFighter = FALSE;
        }

        if ((gPlayerControllers[z_held_port].stick_range.y > 20) && (D_ovl33_801366E4 < 45.0f))
        {
            D_ovl33_801366E4 += gPlayerControllers[z_held_port].stick_range.y / 60.0f;

            mnCharsMoveFighterCamera(CameraGetStruct(gMNCharsFighterCameraGObj), D_ovl33_801366E4, D_ovl33_801366E8);

            gMNCharsAutoRotateFighter = FALSE;
        }

        if ((gPlayerControllers[z_held_port].stick_range.y < -20) && (D_ovl33_801366E4 > -45.0f))
        {
            D_ovl33_801366E4 += gPlayerControllers[z_held_port].stick_range.y / 60.0f;

            mnCharsMoveFighterCamera(CameraGetStruct(gMNCharsFighterCameraGObj), D_ovl33_801366E4, D_ovl33_801366E8);

            gMNCharsAutoRotateFighter = FALSE;
        }
    }
    else
    {
        if (
            mnCommonCheckGetOptionButtonInput(gMNCharsChangeWait, is_button, L_JPAD | L_TRIG | L_CBUTTONS) ||
            mnCommonCheckGetOptionStickInputLR(gMNCharsChangeWait, stick_range, -20, 0)
        )
        {
                do
                {
                    if (gMNCharsCurrentIndex == 0)
                    {
                        gMNCharsCurrentIndex = 11;
                    }
                    else
                    {
                        gMNCharsCurrentIndex -= 1;
                    }
                }
                while (mnCharsIsUnlocked(mnCharsGetFtKind(gMNCharsCurrentIndex)) == FALSE);

                mnCharsChangeFighter(mnCharsGetFtKind(gMNCharsCurrentIndex));

                mnCommonSetOptionChangeWaitN(gMNCharsChangeWait, is_button, stick_range, 7);

                mnCharsResetFighterViewport();
        }

        if (
            mnCommonCheckGetOptionButtonInput(gMNCharsChangeWait, is_button, R_JPAD | R_TRIG | R_CBUTTONS) ||
            mnCommonCheckGetOptionStickInputLR(gMNCharsChangeWait, stick_range, 20, 1)
        )
        {
            do
            {
                if (gMNCharsCurrentIndex == 11)
                {
                    gMNCharsCurrentIndex = 0;
                }
                else
                {
                    gMNCharsCurrentIndex += 1;
                }
            }
            while (mnCharsIsUnlocked(mnCharsGetFtKind(gMNCharsCurrentIndex)) == FALSE);

            mnCharsChangeFighter(mnCharsGetFtKind(gMNCharsCurrentIndex));

            mnCommonSetOptionChangeWaitP(gMNCharsChangeWait, is_button, stick_range, 7);

            mnCharsResetFighterViewport();
        }
    }
}

// 0x80133CB8
void mnCharsHandleInputDemoMode()
{
    if (func_ovl1_8039076C(START_BUTTON | A_BUTTON | B_BUTTON) != FALSE)
    {
        gSceneData.scene_previous = gSceneData.scene_current;
        gSceneData.scene_current = scMajor_Kind_Title;
        gSceneData.unk3F = 1;

        func_80005C74();
    }

    if (gMNCharsFramesElapsed == 300)
    {
        gMNCharsCurrentIndex = mnCharsGetIndex(gMNCharsSecondFtKind);
        mnCharsChangeFighter(mnCharsGetFtKind(gMNCharsCurrentIndex));
    }

    if (gMNCharsFramesElapsed == 600)
    {
        gSceneData.scene_previous = gSceneData.scene_current;
        gSceneData.scene_current = scMajor_Kind_Demo;

        func_80005C74();
    }
}

// 0x80133D68
void mnCharsMain(GObj* arg0)
{

    gMNCharsFramesElapsed += 1;

    if (gMNCharsFramesElapsed >= 10)
    {
        if (gMNCharsChangeWait != 0)
        {
            gMNCharsChangeWait -= 1;
        }

        if ((func_ovl1_80390A04(-0x14, 0x14) != FALSE) &&
            (func_ovl1_80390AC0(-0x14, 0x14) != FALSE) &&
            (func_ovl1_80390804(R_JPAD | R_TRIG | R_CBUTTONS) == FALSE) &&
            (func_ovl1_80390804(L_JPAD | L_TRIG | L_CBUTTONS) == FALSE)
        )
        {
            gMNCharsChangeWait = 0;
        }

        if (gMNCharsIsDemoMode == FALSE)
        {
            mnCharsHandleInput();
        }
        else
        {
            mnCharsHandleInputDemoMode();
        }
    }
}

// 0x80133E28
void mnCharsInit()
{
    s32 i;
    rdSetup rldmSetup;

    rldmSetup.tableRomAddr = &D_NF_001AC870;
    rldmSetup.tableFileCount = &D_NF_00000854;
    rldmSetup.fileHeap = 0;
    rldmSetup.fileHeapSize = 0;
    rldmSetup.statusBuf = (rdFileNode*) &D_ovl33_80136720;
    rldmSetup.statusBufSize = 0x64;
    rldmSetup.forceBuf = (rdFileNode*) &D_ovl33_80136A40;
    rldmSetup.forceBufSize = 7;
    rdManagerInitSetup(&rldmSetup);
    rdManagerLoadFiles(D_ovl33_80136228, ARRAY_COUNT(D_ovl33_80136228), gMNCharsFilesArray, gsMemoryAlloc(rdManagerGetAllocSize(D_ovl33_80136228, ARRAY_COUNT(D_ovl33_80136228)), 0x10U));

    omMakeGObjSPAfter(0, mnCharsMain, 0, 0x80000000);
    func_8000B9FC(0, 0x80000000, 0x64, 3, 0xFF);
    func_ovl2_80115890();
    mnCharsInitVars();
    efManager_AllocUserData();
    ftManagerAllocFighter(3, 1);

    for (i = 0; i < 12; i++)
    {
        ftManagerSetupDataKind(i);
    }

    gMNCharsAnimHeap = gsMemoryAlloc(gFTAnimHeapSize, 0x10);
    mnCharsCreateBioViewport();
    mnCharsCreateHeaderViewport();
    mnCharsCreateSeriesLogoViewport();
    mnCharsCreateNameViewport();
    mnCharsCreateWorksBackgroundViewport();
    mnCharsCreateWorksViewport();
    mnCharsCreateFighterViewport();
    mnCharsCreateHeader();
    mnCharsCreateWorksBackground();
    mnCharsCreateWorks(mnCharsGetFtKind(gMNCharsCurrentIndex));
    mnCharsCreateBio(mnCharsGetFtKind(gMNCharsCurrentIndex));
    mnCharsCreateSeriesLogo(mnCharsGetFtKind(gMNCharsCurrentIndex));
    mnCharsCreateName(mnCharsGetFtKind(gMNCharsCurrentIndex));
    mnCharsCreateMoveName();
    mnCharsCreateFighter(mnCharsGetFtKind(gMNCharsCurrentIndex));

    func_ovl1_803904E0(45.0f, 10.f, 0xFF, 0xFF, 0xFF, 0xFF);

    if (gSceneData.scene_previous == scMajor_Kind_Data)
    {
        func_80020AB4(0, 0x2B);
    }
}

// char_bkg_info_entry
void char_bkg_info_entry()
{
    D_ovl33_801364FC.unk_scdatabounds_0xC = (uintptr_t)((uintptr_t)&D_NF_800A5240 - 0x1900);
    func_80007024(&D_ovl33_801364FC);
    D_ovl33_80136518.arena_size = (u32) ((uintptr_t)&lOverlay33ArenaHi - (uintptr_t)&lOverlay33ArenaLo);
    func_800A2698(&D_ovl33_80136518);
}