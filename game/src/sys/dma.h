#ifndef SYSTEM_DMA_H
#define SYSTEM_DMA_H

#include <ssb_types.h>

#include <PR/os.h>
#include <PR/ultratypes.h>

// loadovl.h? or a generic overlay header?
// all ends are exclusive [start..end)
struct Overlay {
    u32 romStart;
    u32 romEnd;
    void *ramLoadStart;
    void *ramTextStart;
    void *ramTextEnd;
    void *ramDataStart;
    void *ramDataEnd;
    void *ramNoloadStart;
    void *ramNoloadEnd;
}; // size == 0x24

extern OSPiHandle *gRomPiHandle;

extern void create_dma_mq(void);
extern void dma_copy(OSPiHandle *handle, u32 physAddr, uintptr_t vAddr, u32 size, u8 direction);
extern void load_overlay(struct Overlay *ovl);
extern void dma_rom_read(u32 romSrc, void *ramDst, u32 nbytes);
extern void dma_rom_write(void *ramSrc, u32 romDst, u32 nbytes);
extern OSPiHandle *sram_pi_init(void);
extern void dma_sram_read(u32 romSrc, void *ramDst, u32 nbytes);
extern void dma_sram_write(void *ramSrc, u32 romDst, u32 nbytes);
extern void dma_vpk_read(u32 devAddr, void *ramDst);

#endif /* SYSTEM_DMA_H */
