#include "ovl0/reloc_data_mgr.h"

#include "scenemgr/scene_manager.h"
#include "sys/crash.h"
#include "sys/dma.h"

#include <macros.h>
#include <ssb_types.h>

#include <PR/ultratypes.h>

#define RLDM_CACHE_ALIGN(x) (((x) + 0xf) & ~0xf)

enum RldmFileLocation { RLDM_LOCATION_EXTERNAL, RLDM_LOCATION_STANDARD, RLDM_LOCATION_FORCE };

struct InternalBuffers {
    /* 0x00 */ s32 romTableAddr;
    /* 0x04 */ u32 totalFiles;
    /* 0x08 */ s32 romTableEndAddr;
    /* 0x0C */ u8 *dataHeapStart;
    /* 0x10 */ u8 *dataHeapPtr;
    /* 0x14 */ u8 *dataHeapEnd;
    // "status buffer"
    /* 0x18 */ s32 statusBufLen;
    /* 0x1C */ s32 statusBufCapacity;
    /* 0x20 */ struct RldmFileNode *statusBuf;
    // "force status buffer"
    /* 0x24 */ s32 forceBufLen;
    /* 0x28 */ s32 forceBufCapacity;
    /* 0x2C */ struct RldmFileNode *forceBuf;
};

// bss
struct InternalBuffers sInternalBuf;

// this buffer and pointers are used to DMA table entry info from the rom
// as needed for reading in file data
struct RldmTableEntry sTableEntryStore[3];
struct RldmTableEntry *sCurrentEntry;
struct RldmTableEntry *sNextEntry;

// external data pointers and buffers
// loaded files in an external heap
u32 *sExternalFileIds;
s32 sExternalFileIdLen;
s32 sExternalFileIdCapacity;
u8 *sExternalFileHeapPtr;

// forward dec
void *get_file_external_status(RldmFileId);
void *get_file_internal_buffer(RldmFileId);
void *get_file_external_force(RldmFileId);

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunknown-pragmas"

void *find_file_in_status_buf(RldmFileId id) {
    s32 i;

    if (sInternalBuf.statusBufLen == 0) { return NULL; }

    for (i = 0; i < sInternalBuf.statusBufLen; i++) {
        if (id == sInternalBuf.statusBuf[i].id) { return sInternalBuf.statusBuf[i].addr; }
    }

    return NULL;
}

void *rldm_get_file_standard(RldmFileId id) {
    return find_file_in_status_buf(id);
}

void *find_file_in_force_buf(RldmFileId id) {
    s32 i;

    if (sInternalBuf.forceBufLen != 0) {
        for (i = 0; i < sInternalBuf.forceBufLen; i++) {
            if (id == sInternalBuf.forceBuf[i].id) { return sInternalBuf.forceBuf[i].addr; }
        }
    }

    return find_file_in_status_buf(id);
}

void *rldm_get_file_force(RldmFileId id) {
    return find_file_in_force_buf(id);
}

void add_to_status_buffer(RldmFileId id, void *startAddr) {
    u32 idx;

    idx = sInternalBuf.statusBufLen;
    if (idx >= (u32)sInternalBuf.statusBufCapacity) {
        while (TRUE) {
            fatal_printf("Relocatable Data Manager: Status Buffer is full !!\n");
            scnmgr_crash_print_gobj_state();
        }
    }

    sInternalBuf.statusBuf[idx].id   = id;
    sInternalBuf.statusBuf[idx].addr = startAddr;
    sInternalBuf.statusBufLen++;
}

void add_to_force_status_buffer(RldmFileId id, void *startAddr) {
    u32 idx;

    idx = sInternalBuf.forceBufLen;
    if (idx >= (u32)sInternalBuf.forceBufCapacity) {
        while (TRUE) {
            fatal_printf("Relocatable Data Manager: Force Status Buffer is full !!\n");
            scnmgr_crash_print_gobj_state();
        }
    }

    sInternalBuf.forceBuf[idx].id   = id;
    sInternalBuf.forceBuf[idx].addr = startAddr;
    sInternalBuf.forceBufLen++;
}

void dma_table_entry(RldmFileId entryIdx) {
    dma_rom_read(
        sInternalBuf.romTableAddr + (entryIdx * sizeof(struct RldmTableEntry)),
        sCurrentEntry,
        sizeof(struct RldmTableEntry) * 2);
}

void load_and_reloc_file(RldmFileId fileId, void *ramDst, u32 nbytes, enum RldmFileLocation loc);
#ifdef NON_MATCHING
// nonmatching: can't get the +2 rom address inc for external relocs
//              to go into the right location
void load_and_reloc_file(RldmFileId fileId, void *ramDst, u32 nbytes, enum RldmFileLocation loc) {
    u16 *externFileId; // s0
    u16 *ptr;
    void *externVaddr;
    u8 idBuf[0x18];
    u16 intreloc;
    u16 reloc;         // s3
    u32 dataRomOffset; // s4

    dataRomOffset = sInternalBuf.romTableEndAddr + (sCurrentEntry->dataOffset & 0x7FFFFFFF);

    if (sCurrentEntry->dataOffset >> 31) {
        dma_vpk_read(dataRomOffset, ramDst);
    } else {
        dma_rom_read(dataRomOffset, ramDst, nbytes);
    }

    if (loc == RLDM_LOCATION_FORCE) {
        add_to_force_status_buffer(fileId, ramDst);
    } else {
        add_to_status_buffer(fileId, ramDst);
    }
    // L800CD904
    intreloc = sCurrentEntry->internalRelocOffset;
    while (intreloc != 0xFFFF) {
        ptr           = (void *)((uintptr_t)ramDst + (intreloc * 4));
        intreloc      = ptr[0];
        *(void **)ptr = (void *)((uintptr_t)ramDst + ((uintptr_t)ptr[1] * 4));
    }
    // L800CD948
    reloc = sCurrentEntry->externalRelocOffset;
    dataRomOffset += (u32)sCurrentEntry->compressedSize * 4;
    externFileId = (void *)RLDM_CACHE_ALIGN((uintptr_t)idBuf);
    while (reloc != 0xFFFF) {
        ptr   = (void *)((uintptr_t)ramDst + (reloc * 4));
        reloc = ptr[0];

        dma_rom_read(dataRomOffset, externFileId, sizeof(u16));
        if (loc == RLDM_LOCATION_FORCE) {
            externVaddr = find_file_in_force_buf(*externFileId);
        } else {
            externVaddr = find_file_in_status_buf(*externFileId);
        }

        if (externVaddr == NULL) {
            switch (loc) {
                case RLDM_LOCATION_EXTERNAL:
                    externVaddr = get_file_external_status(*externFileId);
                    break;
                case RLDM_LOCATION_STANDARD:
                    externVaddr = get_file_internal_buffer(*externFileId);
                    break;
                case RLDM_LOCATION_FORCE:
                    externVaddr = get_file_external_force(*externFileId);
                    break;
            }
        }
        // L800CD9F0
        *(void **)ptr = (void *)((uintptr_t)externVaddr + ((uintptr_t)ptr[1] * 4));
        dataRomOffset += sizeof(u16);
    }
}
#else
#pragma GLOBAL_ASM("game/nonmatching/ovl0/reloc_data_mgr/load_and_reloc_file.s")
#endif

u32 external_bytes_needed_to_load(RldmFileId fileId);
#ifdef NON_MATCHING
// nonmatching: the cursor calculations and size seem to be off (need temp vars?)
u32 external_bytes_needed_to_load(RldmFileId fileId) {
    u32 romExternCsr; // s0
    u16 *readFileId;  // s1
    u32 bytesRead;    // s2
    u32 endPoint;     // s3
    u8 idBuf[0x20];
    s32 i;

    if (find_file_in_status_buf(fileId) != NULL) { return 0; }
    // L800CDA68
    for (i = 0; i < sExternalFileIdLen; i++) {
        if (fileId == sExternalFileIds[i]) { return 0; }
    }
    // L800CDAA8
    if (sExternalFileIdLen >= sExternalFileIdCapacity) {
        while (TRUE) {
            fatal_printf(
                "Relocatable Data Manager: External Data is over %d!!\n", sExternalFileIdCapacity);
            scnmgr_crash_print_gobj_state();
        }
    }
    // L800CDADC
    dma_table_entry(fileId);

    sExternalFileIds[sExternalFileIdLen++] = fileId;
    romExternCsr = sInternalBuf.romTableEndAddr + (sCurrentEntry->dataOffset & 0x7FFFFFFF)
                 + sCurrentEntry->compressedSize;
    endPoint  = sInternalBuf.romTableEndAddr + (sNextEntry->dataOffset & 0x7FFFFFFF);
    bytesRead = RLDM_CACHE_ALIGN(sCurrentEntry->decompressedSize * 4);

    readFileId = (void *)RLDM_CACHE_ALIGN((uintptr_t)idBuf);
    while (romExternCsr < endPoint) {
        dma_rom_read(romExternCsr, readFileId, sizeof(u16));
        bytesRead += external_bytes_needed_to_load(*readFileId);
        romExternCsr++;
    }

    return bytesRead;
}
#else
#pragma GLOBAL_ASM("game/nonmatching/ovl0/reloc_data_mgr/external_bytes_needed_to_load.s")
#endif

/// calc space needed to load `id`
u32 rldm_bytes_needed_to_load(RldmFileId id) {
    u32 externFileIdBuf[50];

    sExternalFileIds        = externFileIdBuf;
    sExternalFileIdLen      = 0;
    sExternalFileIdCapacity = ARRAY_COUNT(externFileIdBuf);

    return external_bytes_needed_to_load(id);
}

// Get a pointer to the start of a file.
// This will copy the file from ROM into RAM if necessary
void *get_file_external_status(RldmFileId fileId) {
    u8 *allocFile;
    void *file;
    u32 fileSize;

    file = find_file_in_status_buf(fileId);
    if (file != NULL) { return file; }

    allocFile = (u8 *)RLDM_CACHE_ALIGN((uintptr_t)sExternalFileHeapPtr);
    dma_table_entry(fileId);
    fileSize             = (u32)sCurrentEntry->decompressedSize * 4;
    sExternalFileHeapPtr = allocFile + fileSize;
    load_and_reloc_file(fileId, allocFile, fileSize, 0);

    return allocFile;
}

void *rldm_get_file_with_external_heap(RldmFileId id, u8 *fileHeap) {
    sExternalFileHeapPtr = fileHeap;
    return get_file_external_status(id);
}

#ifdef NON_MATCHING
// nonmatching: slight misordering around bumping the file data heap pointer
void *get_file_internal_buffer(RldmFileId fileId) {
    u32 fileSize;
    void *file;
    u8 *allocFile;
    u8 *endAllocFile;

    file = find_file_in_status_buf(fileId);
    if (file != NULL) { return file; }
    allocFile = (u8 *)RLDM_CACHE_ALIGN((uintptr_t)sInternalBuf.dataHeapPtr);
    dma_table_entry(fileId);

    fileSize                 = (u32)sCurrentEntry->decompressedSize * 4;
    endAllocFile             = allocFile + fileSize;
    sInternalBuf.dataHeapPtr = endAllocFile;
    if (sInternalBuf.dataHeapEnd < endAllocFile) {
        while (TRUE) {
            fatal_printf("Relocatable Data Manager: Buffer is full !!\n");
            scnmgr_crash_print_gobj_state();
        }
    }
    load_and_reloc_file(fileId, allocFile, fileSize, RLDM_LOCATION_STANDARD);

    return allocFile;
}
#else
#pragma GLOBAL_ASM("game/nonmatching/ovl0/reloc_data_mgr/get_file_internal_buffer.s")
#endif

void *get_file_external_force(RldmFileId fileId) {
    u8 *allocFile;
    void *file;
    u32 fileSize;

    file = find_file_in_force_buf(fileId);
    if (file != NULL) { return file; }

    allocFile = (u8 *)RLDM_CACHE_ALIGN((uintptr_t)sExternalFileHeapPtr);
    dma_table_entry(fileId);
    fileSize             = (u32)sCurrentEntry->decompressedSize * 4;
    sExternalFileHeapPtr = allocFile + fileSize;
    load_and_reloc_file(fileId, allocFile, fileSize, 2);

    return allocFile;
}

void *rldm_get_file_external_force(RldmFileId id, u8 *heapAddr) {
    sExternalFileHeapPtr     = heapAddr;
    sInternalBuf.forceBufLen = 0;

    return get_file_external_force(id);
}

uintptr_t rldm_load_files_into(RldmFileId *ids, u32 len, void **filePtrs, u8 *heapAddr) {
    sExternalFileHeapPtr = heapAddr;

    // doesn't match as for-loop..?
    while (len) {
        *filePtrs = get_file_external_status(*ids);

        ids++;
        filePtrs++;
        len--;
    }

    // return the amount allocated
    return (uintptr_t)sExternalFileHeapPtr - (uintptr_t)heapAddr;
}

uintptr_t rldm_load_files(RldmFileId *ids, u32 len, void **filePtrs) {
    UNUSED s32 pad;
    uintptr_t heapStart = (uintptr_t)sInternalBuf.dataHeapPtr;

    // doesn't match as for-loop..?
    while (len) {
        *filePtrs = get_file_internal_buffer(*ids);

        ids++;
        filePtrs++;
        len--;
    }

    // return the amount allocated
    return (uintptr_t)sInternalBuf.dataHeapPtr - heapStart;
}

u32 rldm_bytes_need_to_load(RldmFileId *ids, u32 len) {
    u32 fileIdStore[50];
    UNUSED u32 pad;
    u32 allocated;

    allocated               = 0;
    sExternalFileIds        = fileIdStore;
    sExternalFileIdLen      = 0;
    sExternalFileIdCapacity = ARRAY_COUNT(fileIdStore);

    while (len) {
        allocated = RLDM_CACHE_ALIGN(allocated);
        allocated += external_bytes_needed_to_load(*ids);
        ids++;
        len--;
    }

    return allocated;
}

void rldm_initialize(struct RldmSetup *setup) {
    sInternalBuf.romTableAddr = setup->tableRomAddr;
    sInternalBuf.totalFiles   = setup->tableFileCount;
    sInternalBuf.romTableEndAddr =
        setup->tableRomAddr + ((setup->tableFileCount + 1) * sizeof(struct RldmTableEntry));

    sInternalBuf.dataHeapStart = sInternalBuf.dataHeapPtr = setup->fileHeap;
    sInternalBuf.dataHeapEnd                              = setup->fileHeap + setup->fileHeapSize;

    sCurrentEntry = (void *)RLDM_CACHE_ALIGN((uintptr_t)sTableEntryStore);
    sNextEntry    = sCurrentEntry + 1;

    sInternalBuf.statusBufLen      = 0;
    sInternalBuf.statusBufCapacity = setup->statusBufSize;
    sInternalBuf.statusBuf         = setup->statusBuf;

    sInternalBuf.forceBufCapacity = setup->forceBufSize;
    sInternalBuf.forceBuf         = setup->forceBuf;
}
