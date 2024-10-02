#ifndef _MNMODESELECT_H_
#define _MNMODESELECT_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>
#include <mn/mndef.h>

extern intptr_t lMNModeSelectOption1PModeHighlightSprite;               // 0x00001990
extern intptr_t lMNModeSelectOptionVSModeHighlightSprite;               // 0x00002520
extern intptr_t lMNModeSelectOptionDataHighlightSprite;                 // 0x000030B0
extern intptr_t lMNModeSelectDecalModeSelectSprite;                     // 0x000040F0
extern intptr_t lMNModeSelectOptionOptionHighlightSprite;               // 0x00004C80
extern intptr_t lMNModeSelectLabel1PModeSprite;                         // 0x00005570
extern intptr_t lMNModeSelectLabelVSModeSprite;                         // 0x000057E0
extern intptr_t lMNModeSelectLabelDataSprite;                           // 0x00005980
extern intptr_t lMNModeSelectOption1PModeNotSprite;                     // 0x00006048
extern intptr_t lMNModeSelectOptionVSModeNotSprite;                     // 0x00006708
extern intptr_t lMNModeSelectOptionDataNotSprite;                       // 0x00006DC8
extern intptr_t lMNModeSelectDecalBarEdgeSprite;                        // 0x000072E8
extern intptr_t lMNModeSelectDecalSmashLogoSprite;                      // 0x00007AA8
extern intptr_t lMNModeSelectDecalBarMiddleSprite;                      // 0x00007C38
extern intptr_t lMNModeSelectOptionOptionNotSprite;                     // 0x000082F8
extern intptr_t lMNModeSelectLabelOptionSprite;                         // 0x000084F8

extern void mnModeSelectProcLights(Gfx **dls);
extern void mnModeSelectMake1PMode(void);
extern void mnModeSelectMakeVSMode(void);
extern void mnModeSelectMakeOption(void);
extern void mnModeSelectMakeData(void);
extern void mnModeSelectMakeLabels(void);
extern void mnModeSelectMakeDecals(void);
extern void mnModeSelectMakeLabelsCamera(void);
extern void mnModeSelectMakeDecalsCamera(void);
extern void mnModeSelectMakeOptions(void);
extern void mnModeSelectEjectOptions(void);
extern void mnModeSelectInitVars(void);
extern void mnModeSelectProcRun(GObj *gobj);
extern void mnModeSelectProcStart(void);
extern void mnModeSelectStartScene(void);

#endif
