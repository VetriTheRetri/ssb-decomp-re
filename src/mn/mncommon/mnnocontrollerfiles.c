#include <mn/menu.h>

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x800D67D0
void *gMNNoControllerFiles[1];

// 0x800D67D8
LBFileNode sMNNoControllerStatusBuffer[100];

// 0x800D6AF8
LBFileNode sMNNoControllerForceStatusBuffer[7];

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x800D67B0
u32 dMNNoControllerFileIDs[/* */] = { &lMNNoControllerFileID };

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x800D6660
void mnNoControllerSetupFiles(void)
{
	LBRelocSetup rl_setup;

	rl_setup.table_addr = (uintptr_t)&lLBRelocTableAddr;
	rl_setup.table_files_num = (u32)&lLBRelocTableFilesNum;
	rl_setup.file_heap = NULL;
	rl_setup.file_heap_size = 0;
	rl_setup.status_buffer = sMNNoControllerStatusBuffer;
	rl_setup.status_buffer_size = ARRAY_COUNT(sMNNoControllerStatusBuffer);
	rl_setup.force_status_buffer = sMNNoControllerForceStatusBuffer;
	rl_setup.force_status_buffer_size = ARRAY_COUNT(sMNNoControllerForceStatusBuffer);

	lbRelocInitSetup(&rl_setup);
	lbRelocLoadFilesExtern
	(
		dMNNoControllerFileIDs,
		ARRAY_COUNT(dMNNoControllerFileIDs),
		gMNNoControllerFiles,
		syTaskmanMalloc
		(
			lbRelocGetAllocSize
			(
				dMNNoControllerFileIDs,
				ARRAY_COUNT(dMNNoControllerFileIDs)
			),
			0x10
		)
	);
}