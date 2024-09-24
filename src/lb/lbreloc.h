#ifndef _LBRELOC_H_
#define _LBRELOC_H_

#include <ssb_types.h>
#include <lb/lbdef.h>

#define GetAddressFromOffset(file_ptr, offset) ((int*)((intptr_t)(file_ptr) + (intptr_t)(offset)))

/* Can't actually use this in a matching build, newline memes :(
#define rdManagerSetupCommonFiles(status_buf, force_buf)                    \
{                                                                           \
    lbRelocSetup rl_setup;                                                       \
    rl_setup.table_addr = (uintptr_t)&lLBRelocTableAddr;                  \
    rl_setup.table_files_num = (uintptr_t)&lLBRelocTableFilesNum;         \
    rl_setup.file_heap = NULL;                                              \
    rl_setup.file_heap_size = 0;                                            \
    rl_setup.status_buf = status_buf;                                       \
    rl_setup.status_buf_size = (status_buf) ? ARRAY_COUNT(status_buf) : 0;  \
    rl_setup.force_buf = force_buf;                                         \
    rl_setup.force_buf_size = (force_buf) ? ARRAY_COUNT(force_buf) : 0;     \
    lbRelocInitSetup(&rl_setup);                                          \
    lbRelocLoadFilesExtern                                                      \
    (                                                                       \
        dGMCommonFileIDs,                                                   \
        ARRAY_COUNT(dGMCommonFileIDs),                                      \
        gGMCommonFiles,                                                     \
        gsMemoryAlloc                                                       \
        (                                                                   \
            lbRelocGetAllocSize                                           \
            (                                                               \
                dGMCommonFileIDs,                                           \
                ARRAY_COUNT(dGMCommonFileIDs)                               \
            ),                                                              \
            0x10                                                            \
        )                                                                   \
    );                                                                      \
}
*/

extern uintptr_t lLBRelocTableFilesNum;     // 0x00000854
extern uintptr_t lLBRelocTableAddr;         // 0x001AC870

extern void* lbRelocFindFileStatusBuf(u32 id);
extern void* lbRelocGetFileStatusBuf(u32 id);
extern void* lbRelocFindFileForceBuf(u32 id);
extern void* lbRelocGetFileForceBuf(u32 id);
extern void lbRelocAddFileStatusBuf(u32 id, void *addr);
extern void lbRelocAddFileForceBuf(u32 id, void *addr);
extern void lbRelocReadDmaTableEntry(u32 entry_id);
extern void lbRelocLoadAndRelocFile(u32 file_id, void *ram_dst, u32 bytes_num, s32 loc);
extern size_t lbRelocGetExternBytesNum(u32 file_id);
extern size_t lbRelocGetFileSize(u32 id);
extern void* lbRelocGetFileExternStatusBuf(u32 file_id);
extern void* lbRelocGetFileExternHeap(u32 id, void *heap);
extern void* lbRelocGetFileInternBuf(u32 file_id);
extern void* lbRelocGetFileExternForceBuf(u32 file_id);
extern void* lbRelocGetFileExternForceBufHeap(u32 id, void *heap);
extern size_t lbRelocLoadFilesExtern(u32 *ids, u32 len, void **files, void *heap);
extern size_t lbRelocLoadFilesIntern(u32 *ids, u32 len, void **files);
extern size_t lbRelocGetAllocSize(u32 *ids, u32 len);
extern void lbRelocInitSetup(lbRelocSetup *setup);

#endif
