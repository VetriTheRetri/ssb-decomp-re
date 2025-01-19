#ifndef _GROUND_H_
#define _GROUND_H_

#include "grtypes.h"
#include "grfunctions.h"

extern intptr_t lGRCommonMapHeaderStart;                    // 0x00000014

extern intptr_t lGRPupupuMapFileID;                         // 0x000000FF
extern intptr_t lGRPupupuSmallMapFileID;                    // 0x00000100
extern intptr_t lGRZebesMapFileID;                          // 0x00000101
extern intptr_t lGRPupupuTestMapFileID;                     // 0x00000102
extern intptr_t lGRCastleMapFileID;                         // 0x00000103
extern intptr_t lGRInishieMapFileID;                        // 0x00000104
extern intptr_t lGRJungleMapFileID;                         // 0x00000105
extern intptr_t lGRSectorMapFileID;                         // 0x00000106
extern intptr_t lGRYosterMapFileID;                         // 0x00000107
extern intptr_t lGRYamabukiMapFileID;                       // 0x00000108
extern intptr_t lGRHyruleMapFileID;                         // 0x00000109
extern intptr_t lGRLastMapFileID;                           // 0x0000010A
extern intptr_t lGRExplainMapFileID;                        // 0x0000010B
extern intptr_t lGRZakoMapFileID;                           // 0x0000010C
extern intptr_t lGRMetalMapFileID;                          // 0x0000010D
extern intptr_t lGRYosterSmallMapFileID;                    // 0x0000010E
extern intptr_t lGRBonus1MarioMapFileID;                    // 0x0000010F
extern intptr_t lGRBonus1FoxMapFileID;                      // 0x00000110
extern intptr_t lGRBonus1DonkeyMapFileID;                   // 0x00000111
extern intptr_t lGRBonus1SamusMapFileID;                    // 0x00000112
extern intptr_t lGRBonus1LuigiMapFileID;                    // 0x00000113
extern intptr_t lGRBonus1LinkMapFileID;                     // 0x00000114
extern intptr_t lGRBonus1YoshiMapFileID;                    // 0x00000115
extern intptr_t lGRBonus1CaptainMapFileID;                  // 0x00000116
extern intptr_t lGRBonus1KirbyMapFileID;                    // 0x00000117
extern intptr_t lGRBonus1PikachuMapFileID;                  // 0x00000118
extern intptr_t lGRBonus1PurinMapFileID;                    // 0x00000119
extern intptr_t lGRBonus1NessMapFileID;                     // 0x0000011A
extern intptr_t lGRBonus2MarioMapFileID;                    // 0x0000011B
extern intptr_t lGRBonus2FoxMapFileID;                      // 0x0000011C
extern intptr_t lGRBonus2DonkeyMapFileID;                   // 0x0000011D
extern intptr_t lGRBonus2SamusMapFileID;                    // 0x0000011E
extern intptr_t lGRBonus2LuigiMapFileID;                    // 0x0000011F
extern intptr_t lGRBonus2LinkMapFileID;                     // 0x00000120
extern intptr_t lGRBonus2YoshiMapFileID;                    // 0x00000121
extern intptr_t lGRBonus2CaptainMapFileID;                  // 0x00000122
extern intptr_t lGRBonus2KirbyMapFileID;                    // 0x00000123
extern intptr_t lGRBonus2PikachuMapFileID;                  // 0x00000124
extern intptr_t lGRBonus2PurinMapFileID;                    // 0x00000125
extern intptr_t lGRBonus2NessMapFileID;                     // 0x00000126
extern intptr_t lGRBonus3MapFileID;                         // 0x00000127

extern intptr_t lGRBonus1MarioTargetsStart;					// 0x00001EB0
extern intptr_t lGRBonus1MarioTargetsDObjDesc;				// 0x00002150
extern intptr_t lGRBonus1MarioTargetsAnimJoint;				// 0x00002360
extern intptr_t lGRBonus1FoxTargetsStart;					// 0x00002068
extern intptr_t lGRBonus1FoxTargetsDObjDesc;				// 0x000024B0
extern intptr_t lGRBonus1FoxTargetsAnimJoint;				// 0x000026C0
extern intptr_t lGRBonus1DonkeyTargetsStart;				// 0x00001F20
extern intptr_t lGRBonus1DonkeyTargetsDObjDesc;				// 0x00002250
extern intptr_t lGRBonus1DonkeyTargetsAnimJoint;			// 0x00002460
extern intptr_t lGRBonus1SamusTargetsStart;					// 0x00001868
extern intptr_t lGRBonus1SamusTargetsDObjDesc;				// 0x00001B30
extern intptr_t lGRBonus1SamusTargetsAnimJoint;				// 0x00001D40
extern intptr_t lGRBonus1LuigiTargetsStart;					// 0x00001BA0
extern intptr_t lGRBonus1LuigiTargetsDObjDesc;				// 0x00002020
extern intptr_t lGRBonus1LuigiTargetsAnimJoint;				// 0x00002230
extern intptr_t lGRBonus1LinkTargetsStart;					// 0x00002378
extern intptr_t lGRBonus1LinkTargetsDObjDesc;				// 0x00002770
extern intptr_t lGRBonus1LinkTargetsAnimJoint;				// 0x00002980
extern intptr_t lGRBonus1YoshiTargetsStart;					// 0x00002D68
extern intptr_t lGRBonus1YoshiTargetsDObjDesc;				// 0x00003290
extern intptr_t lGRBonus1YoshiTargetsAnimJoint;				// 0x000034A0
extern intptr_t lGRBonus1CaptainTargetsStart;				// 0x00001888
extern intptr_t lGRBonus1CaptainTargetsDObjDesc;			// 0x00001B70
extern intptr_t lGRBonus1CaptainTargetsAnimJoint;			// 0x00001D80
extern intptr_t lGRBonus1KirbyTargetsStart;					// 0x00002150
extern intptr_t lGRBonus1KirbyTargetsDObjDesc;				// 0x00002510
extern intptr_t lGRBonus1KirbyTargetsAnimJoint;				// 0x00002720
extern intptr_t lGRBonus1PikachuTargetsStart;				// 0x00002658
extern intptr_t lGRBonus1PikachuTargetsDObjDesc;			// 0x00002A70
extern intptr_t lGRBonus1PikachuTargetsAnimJoint;			// 0x00002C80
extern intptr_t lGRBonus1PurinTargetsStart;					// 0x00001FF8
extern intptr_t lGRBonus1PurinTargetsDObjDesc;				// 0x000023A0
extern intptr_t lGRBonus1PurinTargetsAnimJoint;				// 0x000025B0
extern intptr_t lGRBonus1NessTargetsStart;					// 0x00002940
extern intptr_t lGRBonus1NessTargetsDObjDesc;				// 0x00002E60
extern intptr_t lGRBonus1NessTargetsAnimJoint;				// 0x00003070

extern intptr_t lGRBonus2FoxBumpersDObjDesc;				// 0x0000E160
extern intptr_t lGRBonus2FoxBumpersAnimJoint;				// 0x0000E350
extern intptr_t lGRBonus2SamusBumpersDObjDesc;				// 0x00002910
extern intptr_t lGRBonus2SamusBumpersAnimJoint;				// 0x000029C0
extern intptr_t lGRBonus2KirbyBumpersDObjDesc;				// 0x00003920
extern intptr_t lGRBonus2KirbyBumpersAnimJoint;				// 0x00003A60
extern intptr_t lGRBonus2PurinBumpersDObjDesc;				// 0x00004FE0
extern intptr_t lGRBonus2PurinBumpersAnimJoint;				// 0x00005120
extern intptr_t lGRBonus2NessBumpersDObjDesc;				// 0x00003FE0
extern intptr_t lGRBonus2NessBumpersAnimJoint;				// 0x00004090

extern intptr_t lGRBonus2PlatformSmallDObjDesc;			    // 0x00003DA8
extern intptr_t lGRBonus2PlatformSmallAnimJoint;		    // 0x00003E60
extern intptr_t lGRBonus2PlatformSmallMObjSub;			    // 0x00003720
extern intptr_t lGRBonus2PlatformSmallMatAnimJoint;		    // 0x00003F00
extern intptr_t lGRBonus2PlatformMediumDObjDesc;		    // 0x000045D8
extern intptr_t lGRBonus2PlatformMediumAnimJoint;		    // 0x00004690
extern intptr_t lGRBonus2PlatformMediumMObjSub;			    // 0x00003F70
extern intptr_t lGRBonus2PlatformMediumMatAnimJoint;	    // 0x00004730
extern intptr_t lGRBonus2PlatformLargeDObjDesc;			    // 0x00004E08
extern intptr_t lGRBonus2PlatformLargeAnimJoint;		    // 0x00004EC0
extern intptr_t lGRBonus2PlatformLargeMObjSub;			    // 0x000047A0
extern intptr_t lGRBonus2PlatformLargeMatAnimJoint;		    // 0x00004F70

extern intptr_t lGRBonus2BoardedPlatformSmallDObjDesc;	    // 0x00005520
extern intptr_t lGRBonus2BoardedPlatformSmallAnimJoint;	    // 0x000055D0
extern intptr_t lGRBonus2BoardedPlatformMediumDObjDesc;	    // 0x00005B80
extern intptr_t lGRBonus2BoardedPlatformMediumAnimJoint;	// 0x00005C30
extern intptr_t lGRBonus2BoardedPlatformLargeDObjDesc;	    // 0x000061E0
extern intptr_t lGRBonus2BoardedPlatformLargeAnimJoint;	    // 0x00006290

extern GRStruct gGRCommonStruct;

#endif
