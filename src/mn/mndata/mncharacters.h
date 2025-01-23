#ifndef _MNCHARACTERS_H_
#define _MNCHARACTERS_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>
#include <mn/mndef.h>

extern u32 lMNCharactersFileID;								// 0x00000010

extern intptr_t lMNCharactersLabelSprite; 					// 0x00000630
extern intptr_t lMNCharactersNameTagDefaultSprite;			// 0x00001230
extern intptr_t lMNCharactersNameTagTallSprite;				// 0x000028F0
extern intptr_t lMNCharactersWorksWallpaperSprite;			// 0x00025058
extern intptr_t lMNCharactersStoryWallpaperSprite;			// 0x00030888

extern intptr_t lMNCharactersMarioNameSprite;				// 0x00002F98
extern intptr_t lMNCharactersFoxNameSprite;					// 0x000033A0
extern intptr_t lMNCharactersDonkeyNameSprite;				// 0x00004290
extern intptr_t lMNCharactersSamusNameSprite;				// 0x00004910
extern intptr_t lMNCharactersLuigiNameSprite;				// 0x00004F78
extern intptr_t lMNCharactersLinkNameSprite;				// 0x00005398
extern intptr_t lMNCharactersYoshiNameSprite;				// 0x000058F8
extern intptr_t lMNCharactersCaptainNameSprite;				// 0x00006828
extern intptr_t lMNCharactersKirbyNameSprite;				// 0x00006E48
extern intptr_t lMNCharactersPikachuNameSprite;				// 0x00007628
extern intptr_t lMNCharactersPurinNameSprite;				// 0x000082E0
extern intptr_t lMNCharactersNessNameSprite;				// 0x00008828

extern intptr_t lMNCharactersMarioStorySprite;				// 0x0000ACA8
extern intptr_t lMNCharactersFoxStorySprite;				// 0x0000D128
extern intptr_t lMNCharactersDonkeyStorySprite;				// 0x0000F5A8
extern intptr_t lMNCharactersSamusStorySprite;				// 0x00011A28
extern intptr_t lMNCharactersLuigiStorySprite;				// 0x00013EA8
extern intptr_t lMNCharactersLinkStorySprite;				// 0x00016328
extern intptr_t lMNCharactersYoshiStorySprite;				// 0x000187A8
extern intptr_t lMNCharactersCaptainStorySprite;			// 0x0001AC28
extern intptr_t lMNCharactersKirbyStorySprite;				// 0x0001D0A8
extern intptr_t lMNCharactersPikachuStorySprite;			// 0x0001F528
extern intptr_t lMNCharactersPurinStorySprite;				// 0x000219A8
extern intptr_t lMNCharactersNessStorySprite;				// 0x00023E28

extern intptr_t lMNCharactersMarioWorksSprite;				// 0x00025AB8
extern intptr_t lMNCharactersFoxWorksSprite;				// 0x00026518
extern intptr_t lMNCharactersDonkeyWorksSprite;				// 0x00026F78
extern intptr_t lMNCharactersSamusWorksSprite;				// 0x000279D8
extern intptr_t lMNCharactersLuigiWorksSprite;				// 0x00028438
extern intptr_t lMNCharactersLinkWorksSprite;				// 0x00028E98
extern intptr_t lMNCharactersYoshiWorksSprite;				// 0x000298F8
extern intptr_t lMNCharactersCaptainWorksSprite;			// 0x0002A358
extern intptr_t lMNCharactersKirbyWorksSprite;				// 0x0002ADB8
extern intptr_t lMNCharactersPikachuWorksSprite;			// 0x0002B818
extern intptr_t lMNCharactersPurinWorksSprite;				// 0x0002C278
extern intptr_t lMNCharactersNessWorksSprite;				// 0x0002CCD8

extern intptr_t lMNCharactersMotionSpecialHiInputSprite;	// 0x0002CDA8
extern intptr_t lMNCharactersMotionSpecialNInputSprite;		// 0x0002CE78
extern intptr_t lMNCharactersMotionSpecialLwInputSprite;	// 0x0002CF48

extern intptr_t lMNCharactersMarioSpecialHiNameSprite;		// 0x0002D088
extern intptr_t lMNCharactersMarioSpecialNNameSprite;		// 0x0002DE48
extern intptr_t lMNCharactersMarioSpecialLwNameSprite;		// 0x0002EC48
extern intptr_t lMNCharactersFoxSpecialHiNameSprite;		// 0x0002D1C8
extern intptr_t lMNCharactersFoxSpecialNNameSprite;			// 0x0002DF88
extern intptr_t lMNCharactersFoxSpecialLwNameSprite;		// 0x0002ED88
extern intptr_t lMNCharactersDonkeySpecialHiNameSprite;		// 0x0002D308
extern intptr_t lMNCharactersDonkeySpecialNNameSprite;		// 0x0002E0C8
extern intptr_t lMNCharactersDonkeySpecialLwNameSprite;		// 0x0002EEC8
extern intptr_t lMNCharactersSamusSpecialHiNameSprite;		// 0x0002D448
extern intptr_t lMNCharactersSamusSpecialNNameSprite;		// 0x0002E208
extern intptr_t lMNCharactersSamusSpecialLwNameSprite;		// 0x0002F008
extern intptr_t lMNCharactersLuigiSpecialLwNameSprite;		// 0x0002F148
extern intptr_t lMNCharactersLinkSpecialHiNameSprite;		// 0x0002D588
extern intptr_t lMNCharactersLinkSpecialNNameSprite;		// 0x0002E348
extern intptr_t lMNCharactersLinkSpecialLwNameSprite;		// 0x0002F288
extern intptr_t lMNCharactersYoshiSpecialHiNameSprite;		// 0x0002D6C8
extern intptr_t lMNCharactersYoshiSpecialNNameSprite;		// 0x0002E488
extern intptr_t lMNCharactersYoshiSpecialLwNameSprite;		// 0x0002F3C8
extern intptr_t lMNCharactersCaptainSpecialHiNameSprite;	// 0x0002D808
extern intptr_t lMNCharactersCaptainSpecialNNameSprite;		// 0x0002E5C8
extern intptr_t lMNCharactersCaptainSpecialLwNameSprite;	// 0x0002F508
extern intptr_t lMNCharactersKirbySpecialHiNameSprite;		// 0x0002D948
extern intptr_t lMNCharactersKirbySpecialNNameSprite;		// 0x0002E740
extern intptr_t lMNCharactersKirbySpecialLwNameSprite;		// 0x0002F648
extern intptr_t lMNCharactersPikachuSpecialHiNameSprite;	// 0x0002DA88
extern intptr_t lMNCharactersPikachuSpecialNNameSprite;		// 0x0002E888
extern intptr_t lMNCharactersPikachuSpecialLwNameSprite;	// 0x0002F788
extern intptr_t lMNCharactersPurinSpecialHiNameSprite;		// 0x0002DBC8
extern intptr_t lMNCharactersPurinSpecialNNameSprite;		// 0x0002E9C8
extern intptr_t lMNCharactersPurinSpecialLwNameSprite;		// 0x0002F8C8
extern intptr_t lMNCharactersNessSpecialHiNameSprite;		// 0x0002DD08
extern intptr_t lMNCharactersNessSpecialNNameSprite;		// 0x0002EB08
extern intptr_t lMNCharactersNessSpecialLwNameSprite;		// 0x0002FA08

extern void mnCharactersFuncLights(Gfx **dls);
extern s32 mnCharactersGetFighterKind(s32 page);
extern s32 mnCharactersGetPage(s32 fkind);
extern void mnCharactersMakeStory(s32 fkind);
extern void mnCharactersMakeDecals(void);
extern void mnCharactersMakeEmblem(s32 fkind);
extern void mnCharactersMakeName(s32 fkind);
extern void mnCharactersMakeWorksWallpaper(void);
extern void mnCharactersMakeWorks(s32 fkind);
extern void mnCharactersSetFighterScale(GObj *fighter_gobj, s32 fkind);
extern void mnCharactersSetFighterPosition(GObj *fighter_gobj, s32 fkind);
extern MNCharactersMotion* mnCharactersGetMotion(MNCharactersMotion *motion, s32 fkind, s32 motion_kind, s32 unused, s32 track);
extern sb32 mnCharactersCheckFighterAnimEnd(GObj *fighter_gobj);
extern void mnCharactersInitRecentMotionKinds(void);
extern sb32 mnCharactersCheckRecentMotionKind(s32 motion_kind);
extern s32 mnCharactersGetRandomMotionKind(void);
extern MNCharactersMotion* mnCharactersSetMotion(MNCharactersMotion *motion, s32 motion_kind);
extern MNCharactersMotion* mnCharactersAdvanceTrack(MNCharactersMotion *motion, s32 unused);
extern void mnCharactersFighterProcUpdate(GObj *fighter_gobj);
extern void mnCharactersMakeFighter(s32 fkind);
extern s32 mnCharactersGetMotionKind(void);
extern void mnCharactersUpdateMotionName(GObj *gobj);
extern void mnCharactersMakeMotionName(void);
extern void mnCharactersMakeStoryCamera(void);
extern void mnCharactersMakeDecalsCamera(void);
extern void mnCharactersMakeEmblemCamera(void);
extern void mnCharactersMakeNameCamera(void);
extern void mnCharactersMakeWorksWallpaperCamera(void);
extern void mnCharactersMakeWorksCamera(void);
extern void mnCharactersMakeFighterCamera(void);
extern sb32 mnCharactersCheckHaveFighterKind(s32 fkind);
extern void mnCharactersInitVars(void);
extern void mnCharactersChangeFighter(s32 fkind);
extern void mnCharactersMoveFighterCamera(CObj *cobj, f32 angle, s32 unused);
extern void mnCharactersResetFighterCamera(void);
extern void mnCharactersUpdateScene(void);
extern void mnCharactersUpdateSceneDemo(void);
extern void mnCharactersProcRun(GObj *gobj);
extern void mnCharactersFuncStart(void);
extern void mnCharactersStartScene(void);

#endif
