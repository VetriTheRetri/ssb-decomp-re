#include <gm/generic.h>
#include <lb/library.h>

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 8018E500
lbFileNode sSCAutoDemoStatusBuf[100];

// 8018E820
lbFileNode sSCAutoDemoForceBuf[7];

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
	rl_setup.status_buf = sSCAutoDemoStatusBuf;
	rl_setup.status_buf_size = ARRAY_COUNT(sSCAutoDemoStatusBuf);
	rl_setup.force_buf = sSCAutoDemoForceBuf;
	rl_setup.force_buf_size = ARRAY_COUNT(sSCAutoDemoForceBuf);

	lbRelocInitSetup(&rl_setup);
	lbRelocLoadFilesExtern
	(
		dGMCommonFileIDs,
		ARRAY_COUNT(dGMCommonFileIDs),
		gGMCommonFiles,
		gsMemoryAlloc
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
