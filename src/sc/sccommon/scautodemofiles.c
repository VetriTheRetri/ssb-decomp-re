#include <gm/generic.h>
#include <lb/library.h>

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 8018E500
lbFileNode sSCAutoDemoStatusBuffer[100];

// 8018E820
lbFileNode sSCAutoDemoForceStatusBuffer[7];

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8018E0C0
void scAutoDemoSetupFiles(void)
{
	lbRelocSetup rl_setup;

	rl_setup.table_addr = &lLBRelocTableAddr;
	rl_setup.table_files_num = &lLBRelocTableFilesNum;
	rl_setup.file_heap = NULL;
	rl_setup.file_heap_size = 0;
	rl_setup.status_buffer = sSCAutoDemoStatusBuffer;
	rl_setup.status_buffer_size = ARRAY_COUNT(sSCAutoDemoStatusBuffer);
	rl_setup.force_status_buffer = sSCAutoDemoForceStatusBuffer;
	rl_setup.force_status_buffer_size = ARRAY_COUNT(sSCAutoDemoForceStatusBuffer);

	lbRelocInitSetup(&rl_setup);
	lbRelocLoadFilesExtern
	(
		dGMCommonFileIDs,
		ARRAY_COUNT(dGMCommonFileIDs),
		gGMCommonFiles,
		syProgMalloc
		(
			lbRelocGetAllocSize
			(
				dGMCommonFileIDs,
				ARRAY_COUNT(dGMCommonFileIDs)
			),
			0x10
		)
	);
}
