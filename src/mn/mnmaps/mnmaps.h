#ifndef _MNMAPS_H_
#define _MNMAPS_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>
#include <mp/mpdef.h>
#include <mn/mndef.h>

extern u32 lMNMapsFileID;						// 0x0000001E

extern intptr_t lMNMapsCastleNameSprite;		// 0x000001F8
extern intptr_t lMNMapsSectorNameSprite;		// 0x00000438
extern intptr_t lMNMapsJungleNameSprite;		// 0x00000678
extern intptr_t lMNMapsZebesNameSprite;			// 0x000008B8
extern intptr_t lMNMapsHyruleNameSprite;		// 0x00000B10
extern intptr_t lMNMapsYosterNameSprite;		// 0x00000D58
extern intptr_t lMNMapsYamabukiNameSprite;		// 0x00000F98
extern intptr_t lMNMapsPupupuNameSprite;		// 0x000011D8
extern intptr_t lMNMapsInishieNameSprite;		// 0x00001418

extern intptr_t lMNMapsCastleIconSprite;		// 0x00004D88
extern intptr_t lMNMapsSectorIconSprite;		// 0x00005B68
extern intptr_t lMNMapsJungleIconSprite;		// 0x00006948
extern intptr_t lMNMapsZebesIconSprite;			// 0x00007728
extern intptr_t lMNMapsHyruleIconSprite;		// 0x00008508
extern intptr_t lMNMapsYosterIconSprite;		// 0x000092E8
extern intptr_t lMNMapsPupupuIconSprite;		// 0x0000BC88
extern intptr_t lMNMapsYamabukiIconSprite;		// 0x0000A0C8
extern intptr_t lMNMapsInishieIconSprite;		// 0x0000AEA8
extern intptr_t lMNMapsRandomIconSprite;		// 0x0000CB10

extern intptr_t lMNMapsCursorSprite; 			// 0x00001AB8
extern intptr_t lMNMapsRandomEmblemSprite; 				// 0x00001DD8
extern intptr_t lMNMapsStageSelectSprite; 		// 0x000026A0
extern intptr_t lMNMapsPlaqueSprite; 			// 0x00003840
extern intptr_t lMNMapsTabRightSprite; 			// 0x00003C68
extern intptr_t lMNMapsTabMiddleSprite; 		// 0x00003D68
extern intptr_t lMNMapsTabLeftSprite; 			// 0x00003FA8
extern intptr_t lMNMapsBoardWallpaperSprite; 	// 0x0000C728
extern intptr_t lMNMapsRandomIconSprite; 		// 0x0000CB10
extern intptr_t lMNMapsRandomWallpaperSprite;	// 0x0000DE30

extern void mnMapsAllocModelHeaps(void);
extern void mnMapsFuncLights(Gfx **dls);
extern sb32 mnMapsCheckLocked(s32 gkind);
extern s32 mnMapsGetCharacterID(const char c);
extern f32 mnMapsGetCharacterSpacing(const char *str, s32 c);
extern void mnMapsMakeString(GObj *gobj, const char *str, f32 x, f32 y, u32 *color);
extern void mnMapsMakeWallpaper(void);
extern void mnMapsMakePlaque(void);
extern void mnMapsLabelsProcDisplay(GObj *gobj);
extern void mnMapsMakeLabels(void);
extern s32 mnMapsGetGroundKind(s32 slot);
extern s32 mnMapsGetSlot(s32 gkind);
extern void mnMapsMakeIcons(void);
extern void mnMapsSetNamePosition(SObj *sobj, s32 gkind);
extern void mnMapsMakeName(GObj *gobj, s32 gkind);
extern void mnMapsSetLogoPosition(GObj *gobj, s32 gkind);
extern void mnMapsMakeEmblem(GObj *gobj, s32 gkind);
extern void mnMapsMakeNameAndEmblem(s32 slot);
extern void mnMapsSetCursorPosition(GObj *gobj, s32 slot);
extern void mnMapsMakeCursor(void);
extern void mnMapsLoadMapFile(s32 gkind, void *heap);
extern void mnMapsPreviewWallpaperProcDisplay(GObj *gobj);
extern GObj* mnMapsMakePreviewWallpaper(s32 gkind);
extern void mnMapsModelPriProcDisplay(GObj *gobj);
extern void mnMapsModelSecProcDisplay(GObj *gobj);
extern GObj* mnMapsMakeLayer(s32 gkind, MPGroundData *ground_data, MPGroundDesc *ground_desc, s32 id);
extern void mnMapsMakeModel(s32 gkind, MPGroundData *ground_data, s32 heap_id);
extern void mnMapsDestroyPreview(s32 heap_id);
extern void mnMapsMakePreview(s32 gkind);
extern void mnMapsMakeWallpaperCamera(void);
extern void mnMapsMakePlaqueCamera(void);
extern void mnMapsMakePreviewWallpaperCamera(void);
extern void mnMapsMakeLabelsViewport(void);
extern void mnMapsMakeIconsCamera(void);
extern void mnMapsMakeNameAndEmblemCamera(void);
extern void mnMapsMakeCursorCamera(void);
extern void mnMapsSetPreviewCameraPosition(CObj *cobj, s32 gkind);
extern void mnMapsPreviewCameraThreadUpdate(GObj *gobj);
extern void mnMapsMakePreviewCamera(void);
extern void mnMapsSaveSceneData(void);
extern void mnMapsInitVars(void);
extern void mnMapsSaveSceneData2(void);
extern void mnMapsProcRun(GObj *gobj);
extern void mnMapsFuncStart(void);
extern void mnMapsStartScene(void);

#endif
