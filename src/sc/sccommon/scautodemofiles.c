#include <gm/generic.h>
#include <ovl0/reloc_data_mgr.h>

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 8018E500
rdFileNode sSCAutoDemoStatusBuf[100];

// 8018E820
rdFileNode sSCAutoDemoForceBuf[7];

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8018E0C0
void scAutoDemoSetupFiles(void)
{
	rdSetup rd_setup;

	rd_setup.table_addr = (intptr_t)&lRDManagerTableAddr;
	rd_setup.table_files_num = (uintptr_t)&lRDManagerTableFilesNum;
	rd_setup.file_heap = NULL;
	rd_setup.file_heap_size = 0;
	rd_setup.status_buf = sSCAutoDemoStatusBuf;
	rd_setup.status_buf_size = ARRAY_COUNT(sSCAutoDemoStatusBuf);
	rd_setup.force_buf = sSCAutoDemoForceBuf;
	rd_setup.force_buf_size = ARRAY_COUNT(sSCAutoDemoForceBuf);

	rdManagerInitSetup(&rd_setup);
	rdManagerLoadFiles
	(
		dGMCommonFileIDs,
		ARRAY_COUNT(dGMCommonFileIDs),
		gGMCommonFiles,
		gsMemoryAlloc
		(
			rdManagerGetAllocSize
			(
				dGMCommonFileIDs,
				ARRAY_COUNT(dGMCommonFileIDs)
			),
			0x10
		)
	);
}
