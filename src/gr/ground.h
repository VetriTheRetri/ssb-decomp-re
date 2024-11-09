#ifndef _GROUND_H_
#define _GROUND_H_

#include "grtypes.h"
#include "grfunctions.h"

extern intptr_t lGRCommonHeaderStart;                       // 0x00000014

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
