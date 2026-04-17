#ifndef _MNMAPS_H_
#define _MNMAPS_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>
#include <mp/mpdef.h>
#include <mn/mndef.h>

extern void mnMapsAllocModelHeaps();
extern void mnMapsFuncLights(Gfx **dls);
extern sb32 mnMapsCheckLocked(s32 gkind);
extern s32 mnMapsGetCharacterID(const char c);
extern f32 mnMapsGetCharacterSpacing(const char *str, s32 c);
extern void mnMapsMakeString(GObj *gobj, const char *str, f32 x, f32 y, u32 *color);
extern void mnMapsMakeWallpaper();
extern void mnMapsMakePlaque();
extern void mnMapsLabelsProcDisplay(GObj *gobj);
extern void mnMapsMakeLabels();
extern s32 mnMapsGetGroundKind(s32 slot);
extern s32 mnMapsGetSlot(s32 gkind);
extern void mnMapsMakeIcons();
extern void mnMapsSetNamePosition(SObj *sobj, s32 gkind);
extern void mnMapsMakeName(GObj *gobj, s32 gkind);
extern void mnMapsSetLogoPosition(GObj *gobj, s32 gkind);
extern void mnMapsMakeEmblem(GObj *gobj, s32 gkind);
extern void mnMapsMakeNameAndEmblem(s32 slot);
extern void mnMapsSetCursorPosition(GObj *gobj, s32 slot);
extern void mnMapsMakeCursor();
extern void mnMapsLoadMapFile(s32 gkind, void *heap);
extern void mnMapsPreviewWallpaperProcDisplay(GObj *gobj);
extern GObj* mnMapsMakePreviewWallpaper(s32 gkind);
extern void mnMapsModelPriProcDisplay(GObj *gobj);
extern void mnMapsModelSecProcDisplay(GObj *gobj);
extern GObj* mnMapsMakeLayer(s32 gkind, MPGroundData *ground_data, MPGroundDesc *ground_desc, s32 id);
extern void mnMapsMakeModel(s32 gkind, MPGroundData *ground_data, s32 heap_id);
extern void mnMapsDestroyPreview(s32 heap_id);
extern void mnMapsMakePreview(s32 gkind);
extern void mnMapsMakeWallpaperCamera();
extern void mnMapsMakePlaqueCamera();
extern void mnMapsMakePreviewWallpaperCamera();
extern void mnMapsMakeLabelsViewport();
extern void mnMapsMakeIconsCamera();
extern void mnMapsMakeNameAndEmblemCamera();
extern void mnMapsMakeCursorCamera();
extern void mnMapsSetPreviewCameraPosition(CObj *cobj, s32 gkind);
extern void mnMapsPreviewCameraThreadUpdate(GObj *gobj);
extern void mnMapsMakePreviewCamera();
extern void mnMapsSaveSceneData();
extern void mnMapsInitVars();
extern void mnMapsSaveSceneData2();
extern void mnMapsFuncRun(GObj *gobj);
extern void mnMapsFuncStart();
extern void mnMapsStartScene();

#endif
