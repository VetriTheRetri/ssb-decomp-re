#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lFTMarioAnimWaitFileID;             // 0x000001F3
extern intptr_t lFTMarioAnimDownBounceDFileID;      // 0x0000021F
extern intptr_t lFTMarioAnimDownStandDFileID;       // 0x00000221

extern intptr_t lFTMarioMotionWaitScript;           // 0x00000024

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 80130E30
void *gFTMarioFileMain;

// 80130E34
void *gFTMarioFileMainMotion;

// 80130E38
void *gFTMarioFileModel;

// 80130E3C
void *gFTMarioFileSpecial1;

// 80130E40
void *gFTMarioFileSpecial2;

// 80130E44
void *gFTMarioFileSpecial3;

// 80130E48
s32 gFTMarioParticleBankID;

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

/*
FTMotionDesc dFTMarioMotionDescs[] =
{
	// EntryNull?
	{
		&lFTMarioAnimWaitFileID,            // Animation file ID 
		FTMOTION_SCRIPT_NULL,               // Script offset
		FTANIM_FLAG_NONE                     // Animation flags
	},

	// RebirthDown
	{
		&lFTMarioAnimDownBounceDFileID,     // Animation file ID 
		FTMOTION_SCRIPT_NULL,               // Script offset
		FTANIM_FLAG_NONE                     // Animation flags
	},

	// RebirthStand
	{
		&lFTMarioAnimDownStandDFileID,      // Animation file ID 
		FTMOTION_SCRIPT_NULL,               // Script offset
		FTANIM_FLAG_NONE                     // Animation flags
	},

	// RebirthWait
	{
		&lFTMarioAnimWaitFileID,            // Animation file ID 
		&lFTMarioMotionWaitScript,               // Script offset
		FTANIM_FLAG_NONE                     // Animation flags
	},

	// Wait
	{
		&lFTMarioAnimWaitFileID,            // Animation file ID 
		&lFTMarioMotionWaitScript,          // Script offset
		FTANIM_FLAG_NONE                     // Animation flags
	},
};
*/