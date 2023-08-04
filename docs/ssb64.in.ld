/* OUTPUT_FORMAT (elf64-bigmips) TARGET (elf64-bigmips) */

/* Macros */
#define SET_ROM_POS(offset) \
    __romPos = offset;

#define BEGIN_SEG(name, addr) \
    _##name##SegStart = ADDR(.name); \
    _##name##SegRomStart = __romPos; \
    .name addr : AT(__romPos)

#define END_SEG(name) \
    _##name##SegEnd = ADDR(.name) + SIZEOF(.name); \
    _##name##SegRomEnd = __romPos + SIZEOF(.name); \
    __romPos += SIZEOF(.name);

#define BEGIN_NOLOAD(name) \
    _##name##SegNoloadStart = ADDR(.name.noload); \
    .name.noload (NOLOAD) :

#define END_NOLOAD(name) \
    _##name##SegNoloadEnd = ADDR(.name.noload) + SIZEOF(.name.noload);

#define BEGIN_OVERLAY_TEXT(name) \
    _##name##TextStart = ABSOLUTE(.);

#define END_OVERLAY_TEXT(name) \
    _##name##TextEnd = ABSOLUTE(.);

#define BEGIN_OVERLAY_DATA(name) \
    _##name##DataStart = ABSOLUTE(.);

#define END_OVERLAY_DATA(name) \
    _##name##DataEnd = ABSOLUTE(.);

/* Start of Linker Script */
SECTIONS 
{
    SET_ROM_POS(0)

    BEGIN_SEG(boot, 0xA4000000)
    {
        asm/header.o(.rodata);
        asm/boot/boot.o(.text .data);
    }
    END_SEG(boot)

    /* MIPS needs size values defined as hi and lo 2-byte halfwords of a 32bit size 
     * but, GAS cannot perform the needed math inline with the instructions.
    **/
    _systemSegNoloadSizeHi = SIZEOF(.system.noload) >> 16;
    _systemSegNoloadSizeLo = SIZEOF(.system.noload) & 0xFFFF;

    BEGIN_SEG(system, 0x80000400)
    {
        asm/system/entry.o(.text);
        src/sys/main.o(.text);
        src/sys/thread3.asm.o(.text);
        src/sys/dma.asm.o(.text);
        src/sys/thread6.asm.o(.text);
        src/sys/gtl.asm.o(.text);
        src/sys/ml.o(.text);
        src/sys/system_00.o(.text);
        src/sys/rdp_reset.asm.o(.text);
        src/sys/om.asm.o(.text);
        asm/system/system_03.o(.text);
        asm/system/system_04.o(.text);
        asm/system/system_05.o(.text);
        asm/system/system_06.o(.text);
        asm/system/system_07.o(.text);
        asm/system/system_08.o(.text);
        asm/system/system_09.o(.text);
        asm/system/system_10.o(.text);
        asm/system/system_11.o(.text);
        asm/system/system_12.o(.text);

        *libultra.a:setattribute.o(.text);
        asm/system/sprite.o(.text);
        *libultra.a:clearattribute.o(.text);
        *libultra.a:hide.o(.text);
        *libultra.a:show.o(.text);
        *libultra.a:spscale.o(.text);
        asm/system/audio.text.o(.text);
        *libultra.a:sendmesg.o(.text);
        *libultra.a:stopthread.o(.text);
        *libultra.a:recvmesg.o(.text);
        *libultra.a:setintmask.o(.text);
        *libultra.a:sinf.o(.text);
        *libultra.a:sptask.o(.text);
        *libultra.a:destroythread.o(.text);
        *libultra.a:ll.o(.text);
        *libultra.a:exceptasm.o(.text);
        *libultra.a:thread.o(.text);
        *libultra.a:bzero.o(.text);
        asm/system/motor.o(.text);
        *libultra.a:siacs.o(.text);
        *libultra.a:controller.o(.text);
        *libultra.a:createthread.o(.text);
        asm/system/contreaddata.o(.text);
        *libultra.a:virtualtophysical.o(.text);
        *libultra.a:writebackdcache.o(.text);
        *libultra.a:initialize.o(.text);
        asm/system/createspeedparam.o(.text);
        *libultra.a:pirawread.o(.text);
        asm/system/libultra.nops1.o(.text);
        *libultra.a:setsr.o(.text);
        *libultra.a:getsr.o(.text);
        *libultra.a:vigetnextframebuf.o(.text);
        *libultra.a:sprawdma.o(.text);
        *libultra.a:sirawdma.o(.text);
        *libultra.a:epilinkhandle.o(.text);
        *libultra.a:viblack.o(.text);
        *libultra.a:sirawread.o(.text);
        *libultra.a:sptaskyield.o(.text);
        *libultra.a:mtxutil.o(.text);
        *libultra.a:visetmode.o(.text);
        *libultra.a:probetlb.o(.text);
        *libultra.a:pimgr.o(.text);
        *libultra.a:piacs.o(.text);
        asm/system/libultra.nops2.o(.text);
        *libultra.a:devmgr.o(.text);
        *libultra.a:pirawdma.o(.text);
        *libultra.a:getcount.o(.text);
        *libultra.a:seteventmesg.o(.text);
        *libultra.a:sqrtf.o(.text);
        *libultra.a:afterprenmi.o(.text);
        *libultra.a:contquery.o(.text);
        *libultra.a:xprintf.o(.text);
        *libultra.a:unmaptlball.o(.text);
        *libultra.a:epidma.o(.text);
        *libultra.a:string.o(.text);
        *libultra.a:createmesgqueue.o(.text);
        *libultra.a:invalicache.o(.text);
        *libultra.a:invaldcache.o(.text);
        *libultra.a:sp.o(.text);
        *libultra.a:si.o(.text);
        *libultra.a:jammesg.o(.text);
        *libultra.a:setthreadpri.o(.text);
        *libultra.a:getthreadpri.o(.text);
        *libultra.a:viswapbuf.o(.text);
        *libultra.a:mtxcatf.o(.text);
        asm/system/epirawdma.o(.text);
        *libultra.a:sptaskyielded.o(.text);
        *libultra.a:gettime.o(.text);
        *libultra.a:timerintr.o(.text);
        *libultra.a:setglobalintmask.o(.text);
        *libultra.a:aisetfreq.o(.text);
        *libultra.a:normalize.o(.text);
        *libultra.a:setcompare.o(.text);
        *libultra.a:getactivequeue.o(.text);
        *libultra.a:bcopy.o(.text);
        *libultra.a:copy.o(.text);
        *libultra.a:resetglobalintmask.o(.text);
        *libultra.a:interrupt.o(.text);
        *libultra.a:vi.o(.text);
        *libultra.a:viswapcontext.o(.text);
        *libultra.a:pigetcmdq.o(.text);
        *libultra.a:cosf.o(.text);
        *libultra.a:settime.o(.text);
        *libultra.a:visetevent.o(.text);
        *libultra.a:cartrominit.o(.text);
        *libultra.a:pfsselectbank.o(.text);
        *libultra.a:setfpccsr.o(.text);
        asm/system/epirawread.o(.text);
        *libultra.a:yieldthread.o(.text);
        *libultra.a:cents2ratio.o(.text);
        asm/system/contramwrite.o(.text);
        asm/system/pfsgetstatus.o(.text);
        asm/system/contpfs.o(.text);
        *libultra.a:bcmp.o(.text);
        asm/system/contramread.o(.text);
        asm/system/crc.o(.text);
        *libultra.a:pfsisplug.o(.text);
        asm/system/epirawwrite.o(.text);
        *libultra.a:settimer.o(.text);
        *libultra.a:xldtob.o(.text);
        *libultra.a:ldiv.o(.text);
        *libultra.a:xlitob.o(.text);
        *libultra.a:sirawwrite.o(.text);
        *libultra.a:dpsetnextbuf.o(.text);
        *libultra.a:dp.o(.text);
        *libultra.a:spsetstat.o(.text);
        *libultra.a:spgetstat.o(.text);
        asm/system/libultra.nops3.o(.text);
        asm/system/vimgr.o(.text);
        *libultra.a:vigetcurrcontext.o(.text);
        *libultra.a:writebackdcacheall.o(.text);
        *libultra.a:startthread.o(.text);
        *libultra.a:visetyscale.o(.text);
        *libultra.a:llcvt.o(.text);
        *libultra.a:aisetnextbuf.o(.text);
        *libultra.a:ai.o(.text);
        *libultra.a:vigetcurrframebuf.o(.text);
        *libultra.a:spsetpc.o(.text);
        *libultra.a:setwatchlo.o(.text);
        asm/system/rsp.o(.text);

        src/sys/main.o(.data);
        src/sys/gtl.asm.o(.data);
        src/sys/rdp_reset.asm.o(.data);
        src/sys/om.asm.o(.data);
        asm/system/system_03.o(.data);
        asm/system/system_04.o(.data);
        asm/system/system_05.o(.data);
        asm/system/system_06.o(.data);
        asm/system/system_07.o(.data);
        asm/system/system_08.o(.data);
        asm/system/system_09.o(.data);
        asm/system/system_10.o(.data);
        asm/system/system_11.o(.data);
        asm/system/system_12.o(.data);

        asm/system/sprite.o(.data);
        asm/system/audio.data.o(.data);
        *libultra.a:vimodepallan1.o(.data);
        *libultra.a:exceptasm.o(.data);
        *libultra.a:thread.o(.data);
        *libultra.a:siacs.o(.data);
        *libultra.a:controller.o(.data);
        *libultra.a:initialize.o(.data);
        *libultra.a:pimgr.o(.data);
        *libultra.a:piacs.o(.data);
        *libultra.a:xprintf.o(.data);
        *libultra.a:timerintr.o(.data);
        *libultra.a:vimodentsclan1.o(.data);
        *libultra.a:vimodempallan1.o(.data);
        *libultra.a:vi.o(.data);
        *libultra.a:cartrominit.o(.data);
        asm/system/contpfs.o(.data);
        *libultra.a:xlitob.o(.data);
        asm/system/vimgr.o(.data);
        *libultra.a:aisetnextbuf.o(.data);

        src/sys/main.o(.rodata);
        src/sys/thread3.asm.o(.rodata);
        src/sys/thread6.asm.o(.rodata);
        src/sys/gtl.asm.o(.rodata);
        src/sys/ml.o(.rodata);
        src/sys/om.asm.o(.rodata);
        asm/system/system_03.o(.rodata);
        asm/system/system_04.o(.rodata);
        asm/system/system_05.o(.rodata);
        asm/system/system_06.o(.rodata);
        asm/system/system_07.o(.rodata);
        asm/system/system_08.o(.rodata);
        asm/system/system_09.o(.rodata);
        asm/system/system_10.o(.rodata);
        asm/system/system_11.o(.rodata);
        asm/system/system_12.o(.rodata);

        asm/system/sprite.o(.rodata);
        asm/system/audio.rodata.o(.rodata);
        *libultra.a:setintmask.o(.rodata);
        *libultra.a:sinf.o(.rodata);
        *libultra.a:exceptasm.o(.rodata);
        *libultra.a:devmgr.o(.rodata);
        *libultra.a:xprintf.o(.rodata);
        *libultra.a:cosf.o(.rodata);
        *libultra.a:libm_vals.o(.rodata);
        *libultra.a:cents2ratio.o(.rodata);
        *libultra.a:xldtob.o(.rodata);
        *libultra.a:llcvt.o(.rodata);

        asm/system/unknown.rodata.o(.rodata);
        asm/system/rsp.o(.rodata);
    }
    END_SEG(system)
    BEGIN_NOLOAD(system)
    {
        src/sys/main.o(.bss);
        src/sys/thread3.asm.o(.bss);
        src/sys/dma.asm.o(.bss);
        src/sys/thread6.asm.o(.bss);
        src/sys/gtl.asm.o(.bss);
        src/sys/system_00.o(.bss);
        src/sys/rdp_reset.asm.o(.bss);
        src/sys/om.asm.o(.bss);
        asm/system/system_03.o(.bss);
        asm/system/system_04.o(.bss);
        asm/system/system_05.o(.bss);
        asm/system/system_06.o(.bss);
        asm/system/system_07.o(.bss);
        asm/system/system_08.o(.bss);
        asm/system/system_09.o(.bss);
        asm/system/system_10.o(.bss);
        asm/system/system_11.o(.bss);
        asm/system/system_12.o(.bss);

        asm/system/sprite.o(.bss);
        asm/system/audio.bss.o(.bss);
        *libultra.a:sptask.o(.bss);
        asm/system/motor.o(.bss);
        *libultra.a:siacs.o(.bss);
        *libultra.a:controller.o(.bss);
        *libultra.a:initialize.o(.bss);
        *libultra.a:kdebugserver.o(.bss);
        asm/system/romhandles.o(.bss);
        *libultra.a:pimgr.o(.bss);
        *libultra.a:piacs.o(.bss);
        *libultra.a:seteventmesg.o(.bss);
        *libultra.a:timerintr.o(.bss);
        *libultra.a:cartrominit.o(.bss);
        asm/system/contpfs.o(.bss);
        *libultra.a:pfsisplug.o(.bss);
        asm/system/vimgr.o(.bss);
        /* Entry code assumes 8-byte aligned bss section */
        . = ALIGN(8);
    }
    END_NOLOAD(system)
    
    BEGIN_SEG(loadovl, 0x800A1980)
    {
        BEGIN_OVERLAY_TEXT(loadovl)
        asm/loadovl/loadovl.text.o(.text);
        END_OVERLAY_TEXT(loadovl)

        BEGIN_OVERLAY_DATA(loadovl)
        asm/loadovl/loadovl.data.o(.data);
        END_OVERLAY_DATA(loadovl)
    }
    END_SEG(loadovl)
    BEGIN_NOLOAD(loadovl)
    {
        asm/loadovl/loadovl.bss.o(.bss);
    }
    END_NOLOAD(loadovl)

    BEGIN_SEG(ovl0, 0x800C7840)
    {
        asm/ovl0/ovl0.text.o(.text);
        asm/ovl0/ovl0.data.o(.data);
    }
    END_SEG(ovl0)
    BEGIN_NOLOAD(ovl0)
    {
        asm/ovl0/ovl0.bss.o(.bss);
    }
    END_NOLOAD(ovl0)

    BEGIN_SEG(ovl2, 0x800D6490)
    {
        asm/ovl2/ovl2.text.o(.text);
        asm/ovl2/ovl2.data.o(.data);
    }
    END_SEG(ovl2)
    BEGIN_NOLOAD(ovl2)
    {
        asm/ovl2/ovl2.bss.o(.bss);
    }
    END_NOLOAD(ovl2)

    BEGIN_SEG(ovl3, 0x80131B00)
    {
        asm/ovl3/ovl3.text.o(.text);
        asm/ovl3/ovl3.data.o(.data);
    }
    END_SEG(ovl3)
    BEGIN_NOLOAD(ovl3)
    {
        asm/ovl3/ovl3.bss.o(.bss);
    }
    END_NOLOAD(ovl3)

    BEGIN_SEG(ovl1, 0x803903E0)
    {
        asm/ovl1/ovl1.text.o(.text);
        asm/ovl1/ovl1.data.o(.data);
    }
    END_SEG(ovl1)
    BEGIN_NOLOAD(ovl1)
    {
        asm/ovl1/ovl1.bss.o(.bss);
    }
    END_NOLOAD(ovl1)

    BEGIN_SEG(ovl4, 0x8018D0C0)
    {
        asm/ovl4/ovl4.text.o(.text);
        asm/ovl4/ovl4.data.o(.data);
    }
    END_SEG(ovl4)
    BEGIN_NOLOAD(ovl4)
    {
        asm/ovl4/ovl4.bss.o(.bss);
    }
    END_NOLOAD(ovl4)

    BEGIN_SEG(ovl5, 0x8018D0C0)
    {
        asm/ovl5/ovl5.text.o(.text);
        asm/ovl5/ovl5.data.o(.data);
    }
    END_SEG(ovl5)
    BEGIN_NOLOAD(ovl5)
    {
        asm/ovl5/ovl5.bss.o(.bss);
    }
    END_NOLOAD(ovl5)

    BEGIN_SEG(ovl65, 0x8018D0C0)
    {
        asm/ovl65/ovl65.text.o(.text);
        asm/ovl65/ovl65.data.o(.data);
    }
    END_SEG(ovl65)
    BEGIN_NOLOAD(ovl65)
    {
        asm/ovl65/ovl65.bss.o(.bss);
    }
    END_NOLOAD(ovl65)

    BEGIN_SEG(ovl6, 0x8018D0C0)
    {
        asm/ovl6/ovl6.text.o(.text);
        asm/ovl6/ovl6.data.o(.data);
    }
    END_SEG(ovl6)
    BEGIN_NOLOAD(ovl6)
    {
        asm/ovl6/ovl6.bss.o(.bss);
    }
    END_NOLOAD(ovl6)

    BEGIN_SEG(ovl7, 0x8018D0C0)
    {
        asm/ovl7/ovl7.text.o(.text);
        asm/ovl7/ovl7.data.o(.data);
    }
    END_SEG(ovl7)
    BEGIN_NOLOAD(ovl7)
    {
        asm/ovl7/ovl7.bss.o(.bss);
    }
    END_NOLOAD(ovl7)

    BEGIN_SEG(ovl10, 0x80131B00)
    {
        asm/ovl10/ovl10.text.o(.text);
        asm/ovl10/ovl10.data.o(.data);
    }
    END_SEG(ovl10)
    BEGIN_NOLOAD(ovl10)
    {
        asm/ovl10/ovl10.bss.o(.bss);
    }
    END_NOLOAD(ovl10)

    BEGIN_SEG(ovl11, 0x800D6490)
    {
        asm/ovl11/ovl11.text.o(.text);
        asm/ovl11/ovl11.data.o(.data);
    }
    END_SEG(ovl11)
    BEGIN_NOLOAD(ovl11)
    {
        asm/ovl11/ovl11.bss.o(.bss);
    }
    END_NOLOAD(ovl11)

    BEGIN_SEG(ovl12, 0x800D6490)
    {
        asm/ovl12/ovl12.text.o(.text);
        asm/ovl12/ovl12.data.o(.data);
    }
    END_SEG(ovl12)
    BEGIN_NOLOAD(ovl12)
    {
        asm/ovl12/ovl12.bss.o(.bss);
    }
    END_NOLOAD(ovl12)

    BEGIN_SEG(ovl13, 0x80131B00)
    {
        asm/ovl13/ovl13.text.o(.text);
        asm/ovl13/ovl13.data.o(.data);
    }
    END_SEG(ovl13)
    BEGIN_NOLOAD(ovl13)
    {
        asm/ovl13/ovl13.bss.o(.bss);
    }
    END_NOLOAD(ovl13)

    BEGIN_SEG(ovl14, 0x80131B00)
    {
        asm/ovl14/ovl14.text.o(.text);
        asm/ovl14/ovl14.data.o(.data);
    }
    END_SEG(ovl14)
    BEGIN_NOLOAD(ovl14)
    {
        asm/ovl14/ovl14.bss.o(.bss);
    }
    END_NOLOAD(ovl14)

    BEGIN_SEG(ovl17, 0x80131B00)
    {
        asm/ovl17/ovl17.text.o(.text);
        asm/ovl17/ovl17.data.o(.data);
    }
    END_SEG(ovl17)
    BEGIN_NOLOAD(ovl17)
    {
        asm/ovl17/ovl17.bss.o(.bss);
    }
    END_NOLOAD(ovl17)

    BEGIN_SEG(ovl18, 0x80131B00)
    {
        asm/ovl18/ovl18.text.o(.text);
        asm/ovl18/ovl18.data.o(.data);
    }
    END_SEG(ovl18)
    BEGIN_NOLOAD(ovl18)
    {
        asm/ovl18/ovl18.bss.o(.bss);
    }
    END_NOLOAD(ovl18)

    BEGIN_SEG(ovl60, 0x80131B00)
    {
        asm/ovl60/ovl60.text.o(.text);
        asm/ovl60/ovl60.data.o(.data);
    }
    END_SEG(ovl60)
    BEGIN_NOLOAD(ovl60)
    {
        asm/ovl60/ovl60.bss.o(.bss);
    }
    END_NOLOAD(ovl60)

    BEGIN_SEG(ovl61, 0x80131B00)
    {
        asm/ovl61/ovl61.text.o(.text);
        asm/ovl61/ovl61.data.o(.data);
    }
    END_SEG(ovl61)
    BEGIN_NOLOAD(ovl61)
    {
        asm/ovl61/ovl61.bss.o(.bss);
    }
    END_NOLOAD(ovl61)

    BEGIN_SEG(ovl19, 0x80131B00)
    {
        asm/ovl19/ovl19.text.o(.text);
        asm/ovl19/ovl19.data.o(.data);
    }
    END_SEG(ovl19)
    BEGIN_NOLOAD(ovl19)
    {
        asm/ovl19/ovl19.bss.o(.bss);
    }
    END_NOLOAD(ovl19)

    BEGIN_SEG(ovl20, 0x80131B00)
    {
        asm/ovl20/ovl20.text.o(.text);
        asm/ovl20/ovl20.data.o(.data);
    }
    END_SEG(ovl20)
    BEGIN_NOLOAD(ovl20)
    {
        asm/ovl20/ovl20.bss.o(.bss);
    }
    END_NOLOAD(ovl20)

    BEGIN_SEG(ovl21, 0x80131B00)
    {
        asm/ovl21/ovl21.text.o(.text);
        asm/ovl21/ovl21.data.o(.data);
    }
    END_SEG(ovl21)
    BEGIN_NOLOAD(ovl21)
    {
        asm/ovl21/ovl21.bss.o(.bss);
    }
    END_NOLOAD(ovl21)

    BEGIN_SEG(ovl22, 0x80131B00)
    {
        asm/ovl22/ovl22.text.o(.text);
        asm/ovl22/ovl22.data.o(.data);
    }
    END_SEG(ovl22)
    BEGIN_NOLOAD(ovl22)
    {
        asm/ovl22/ovl22.bss.o(.bss);
    }
    END_NOLOAD(ovl22)

    BEGIN_SEG(ovl23, 0x80131B00)
    {
        asm/ovl23/ovl23.text.o(.text);
        asm/ovl23/ovl23.data.o(.data);
    }
    END_SEG(ovl23)
    BEGIN_NOLOAD(ovl23)
    {
        asm/ovl23/ovl23.bss.o(.bss);
    }
    END_NOLOAD(ovl23)

    BEGIN_SEG(ovl24, 0x80131B00)
    {
        asm/ovl24/ovl24.text.o(.text);
        asm/ovl24/ovl24.data.o(.data);
    }
    END_SEG(ovl24)
    BEGIN_NOLOAD(ovl24)
    {
        asm/ovl24/ovl24.bss.o(.bss);
    }
    END_NOLOAD(ovl24)

    BEGIN_SEG(ovl25, 0x80131B00)
    {
        asm/ovl25/ovl25.text.o(.text);
        asm/ovl25/ovl25.data.o(.data);
    }
    END_SEG(ovl25)
    BEGIN_NOLOAD(ovl25)
    {
        asm/ovl25/ovl25.bss.o(.bss);
    }
    END_NOLOAD(ovl25)

    BEGIN_SEG(ovl26, 0x80131B00)
    {
        asm/ovl26/ovl26.text.o(.text);
        asm/ovl26/ovl26.data.o(.data);
    }
    END_SEG(ovl26)
    BEGIN_NOLOAD(ovl26)
    {
        asm/ovl26/ovl26.bss.o(.bss);
    }
    END_NOLOAD(ovl26)

    BEGIN_SEG(ovl27, 0x80131B00)
    {
        asm/ovl27/ovl27.text.o(.text);
        asm/ovl27/ovl27.data.o(.data);
    }
    END_SEG(ovl27)
    BEGIN_NOLOAD(ovl27)
    {
        asm/ovl27/ovl27.bss.o(.bss);
    }
    END_NOLOAD(ovl27)

    BEGIN_SEG(ovl28, 0x80131B00)
    {
        asm/ovl28/ovl28.text.o(.text);
        asm/ovl28/ovl28.data.o(.data);
    }
    END_SEG(ovl28)
    BEGIN_NOLOAD(ovl28)
    {
        asm/ovl28/ovl28.bss.o(.bss);
    }
    END_NOLOAD(ovl28)

    BEGIN_SEG(ovl29, 0x80131B00)
    {
        asm/ovl29/ovl29.text.o(.text);
        asm/ovl29/ovl29.data.o(.data);
    }
    END_SEG(ovl29)
    BEGIN_NOLOAD(ovl29)
    {
        asm/ovl29/ovl29.bss.o(.bss);
    }
    END_NOLOAD(ovl29)

    BEGIN_SEG(ovl30, 0x80131B00)
    {
        asm/ovl30/ovl30.text.o(.text);
        asm/ovl30/ovl30.data.o(.data);
    }
    END_SEG(ovl30)
    BEGIN_NOLOAD(ovl30)
    {
        asm/ovl30/ovl30.bss.o(.bss);
    }
    END_NOLOAD(ovl30)

    BEGIN_SEG(ovl15, 0x800D6490)
    {
        asm/ovl15/ovl15.text.o(.text);
        asm/ovl15/ovl15.data.o(.data);
    }
    END_SEG(ovl15)
    BEGIN_NOLOAD(ovl15)
    {
        asm/ovl15/ovl15.bss.o(.bss);
    }
    END_NOLOAD(ovl15)

    BEGIN_SEG(ovl31, 0x80131B00)
    {
        asm/ovl31/ovl31.text.o(.text);
        asm/ovl31/ovl31.data.o(.data);
    }
    END_SEG(ovl31)
    BEGIN_NOLOAD(ovl31)
    {
        asm/ovl31/ovl31.bss.o(.bss);
    }
    END_NOLOAD(ovl31)

    BEGIN_SEG(ovl32, 0x80131B00)
    {
        asm/ovl32/ovl32.text.o(.text);
        asm/ovl32/ovl32.data.o(.data);
    }
    END_SEG(ovl32)
    BEGIN_NOLOAD(ovl32)
    {
        asm/ovl32/ovl32.bss.o(.bss);
    }
    END_NOLOAD(ovl32)

    BEGIN_SEG(ovl33, 0x80131B00)
    {
        asm/ovl33/ovl33.text.o(.text);
        asm/ovl33/ovl33.data.o(.data);
    }
    END_SEG(ovl33)
    BEGIN_NOLOAD(ovl33)
    {
        asm/ovl33/ovl33.bss.o(.bss);
    }
    END_NOLOAD(ovl33)

    BEGIN_SEG(ovl34, 0x80131B00)
    {
        asm/ovl34/ovl34.text.o(.text);
        asm/ovl34/ovl34.data.o(.data);
    }
    END_SEG(ovl34)
    BEGIN_NOLOAD(ovl34)
    {
        asm/ovl34/ovl34.bss.o(.bss);
    }
    END_NOLOAD(ovl34)

    BEGIN_SEG(ovl35, 0x80131B00)
    {
        asm/ovl35/ovl35.text.o(.text);
        asm/ovl35/ovl35.data.o(.data);
    }
    END_SEG(ovl35)
    BEGIN_NOLOAD(ovl35)
    {
        asm/ovl35/ovl35.bss.o(.bss);
    }
    END_NOLOAD(ovl35)

    BEGIN_SEG(ovl36, 0x8018D0C0)
    {
        asm/ovl36/ovl36.text.o(.text);
        asm/ovl36/ovl36.data.o(.data);
    }
    END_SEG(ovl36)
    BEGIN_NOLOAD(ovl36)
    {
        asm/ovl36/ovl36.bss.o(.bss);
    }
    END_NOLOAD(ovl36)

    BEGIN_SEG(ovl37, 0x8018D0C0)
    {
        asm/ovl37/ovl37.text.o(.text);
        asm/ovl37/ovl37.data.o(.data);
    }
    END_SEG(ovl37)
    BEGIN_NOLOAD(ovl37)
    {
        asm/ovl37/ovl37.bss.o(.bss);
    }
    END_NOLOAD(ovl37)

    BEGIN_SEG(ovl38, 0x8018D0C0)
    {
        asm/ovl38/ovl38.text.o(.text);
        asm/ovl38/ovl38.data.o(.data);
    }
    END_SEG(ovl38)
    BEGIN_NOLOAD(ovl38)
    {
        asm/ovl38/ovl38.bss.o(.bss);
    }
    END_NOLOAD(ovl38)

    BEGIN_SEG(ovl39, 0x8018D0C0)
    {
        asm/ovl39/ovl39.text.o(.text);
        asm/ovl39/ovl39.data.o(.data);
    }
    END_SEG(ovl39)
    BEGIN_NOLOAD(ovl39)
    {
        asm/ovl39/ovl39.bss.o(.bss);
    }
    END_NOLOAD(ovl39)

    BEGIN_SEG(ovl40, 0x8018D0C0)
    {
        asm/ovl40/ovl40.text.o(.text);
        asm/ovl40/ovl40.data.o(.data);
    }
    END_SEG(ovl40)
    BEGIN_NOLOAD(ovl40)
    {
        asm/ovl40/ovl40.bss.o(.bss);
    }
    END_NOLOAD(ovl40)

    BEGIN_SEG(ovl41, 0x8018D0C0)
    {
        asm/ovl41/ovl41.text.o(.text);
        asm/ovl41/ovl41.data.o(.data);
    }
    END_SEG(ovl41)
    BEGIN_NOLOAD(ovl41)
    {
        asm/ovl41/ovl41.bss.o(.bss);
    }
    END_NOLOAD(ovl41)

    BEGIN_SEG(ovl42, 0x8018D0C0)
    {
        asm/ovl42/ovl42.text.o(.text);
        asm/ovl42/ovl42.data.o(.data);
    }
    END_SEG(ovl42)
    BEGIN_NOLOAD(ovl42)
    {
        asm/ovl42/ovl42.bss.o(.bss);
    }
    END_NOLOAD(ovl42)

    BEGIN_SEG(ovl43, 0x8018D0C0)
    {
        asm/ovl43/ovl43.text.o(.text);
        asm/ovl43/ovl43.data.o(.data);
    }
    END_SEG(ovl43)
    BEGIN_NOLOAD(ovl43)
    {
        asm/ovl43/ovl43.bss.o(.bss);
    }
    END_NOLOAD(ovl43)

    BEGIN_SEG(ovl44, 0x80131B00)
    {
        asm/ovl44/ovl44.text.o(.text);
        asm/ovl44/ovl44.data.o(.data);
    }
    END_SEG(ovl44)
    BEGIN_NOLOAD(ovl44)
    {
        asm/ovl44/ovl44.bss.o(.bss);
    }
    END_NOLOAD(ovl44)

    BEGIN_SEG(ovl45, 0x80131B00)
    {
        asm/ovl45/ovl45.text.o(.text);
        asm/ovl45/ovl45.data.o(.data);
    }
    END_SEG(ovl45)
    BEGIN_NOLOAD(ovl45)
    {
        asm/ovl45/ovl45.bss.o(.bss);
    }
    END_NOLOAD(ovl45)

    BEGIN_SEG(ovl46, 0x80131B00)
    {
        asm/ovl46/ovl46.text.o(.text);
        asm/ovl46/ovl46.data.o(.data);
    }
    END_SEG(ovl46)
    BEGIN_NOLOAD(ovl46)
    {
        asm/ovl46/ovl46.bss.o(.bss);
    }
    END_NOLOAD(ovl46)

    BEGIN_SEG(ovl47, 0x80131B00)
    {
        asm/ovl47/ovl47.text.o(.text);
        asm/ovl47/ovl47.data.o(.data);
    }
    END_SEG(ovl47)
    BEGIN_NOLOAD(ovl47)
    {
        asm/ovl47/ovl47.bss.o(.bss);
    }
    END_NOLOAD(ovl47)

    BEGIN_SEG(ovl48, 0x80131B00)
    {
        asm/ovl48/ovl48.text.o(.text);
        asm/ovl48/ovl48.data.o(.data);
    }
    END_SEG(ovl48)
    BEGIN_NOLOAD(ovl48)
    {
        asm/ovl48/ovl48.bss.o(.bss);
    }
    END_NOLOAD(ovl48)

    BEGIN_SEG(ovl49, 0x80131B00)
    {
        asm/ovl49/ovl49.text.o(.text);
        asm/ovl49/ovl49.data.o(.data);
    }
    END_SEG(ovl49)
    BEGIN_NOLOAD(ovl49)
    {
        asm/ovl49/ovl49.bss.o(.bss);
    }
    END_NOLOAD(ovl49)

    BEGIN_SEG(ovl50, 0x80131B00)
    {
        asm/ovl50/ovl50.text.o(.text);
        asm/ovl50/ovl50.data.o(.data);
    }
    END_SEG(ovl50)
    BEGIN_NOLOAD(ovl50)
    {
        asm/ovl50/ovl50.bss.o(.bss);
    }
    END_NOLOAD(ovl50)

    BEGIN_SEG(ovl51, 0x8018D0C0)
    {
        asm/ovl51/ovl51.text.o(.text);
        asm/ovl51/ovl51.data.o(.data);
    }
    END_SEG(ovl51)
    BEGIN_NOLOAD(ovl51)
    {
        asm/ovl51/ovl51.bss.o(.bss);
    }
    END_NOLOAD(ovl51)

    BEGIN_SEG(ovl52, 0x80131B00)
    {
        asm/ovl52/ovl52.text.o(.text);
        asm/ovl52/ovl52.data.o(.data);
    }
    END_SEG(ovl52)
    BEGIN_NOLOAD(ovl52)
    {
        asm/ovl52/ovl52.bss.o(.bss);
    }
    END_NOLOAD(ovl52)

    BEGIN_SEG(ovl53, 0x80131B00)
    {
        asm/ovl53/ovl53.text.o(.text);
        asm/ovl53/ovl53.data.o(.data);
    }
    END_SEG(ovl53)
    BEGIN_NOLOAD(ovl53)
    {
        asm/ovl53/ovl53.bss.o(.bss);
    }
    END_NOLOAD(ovl53)

    BEGIN_SEG(ovl54, 0x80131B00)
    {
        asm/ovl54/ovl54.text.o(.text);
        asm/ovl54/ovl54.data.o(.data);
    }
    END_SEG(ovl54)
    BEGIN_NOLOAD(ovl54)
    {
        asm/ovl54/ovl54.bss.o(.bss);
    }
    END_NOLOAD(ovl54)

    BEGIN_SEG(ovl55, 0x80131B00)
    {
        asm/ovl55/ovl55.text.o(.text);
        asm/ovl55/ovl55.data.o(.data);
    }
    END_SEG(ovl55)
    BEGIN_NOLOAD(ovl55)
    {
        asm/ovl55/ovl55.bss.o(.bss);
    }
    END_NOLOAD(ovl55)

    BEGIN_SEG(ovl56, 0x80131B00)
    {
        asm/ovl56/ovl56.text.o(.text);
        asm/ovl56/ovl56.data.o(.data);
    }
    END_SEG(ovl56)
    BEGIN_NOLOAD(ovl56)
    {
        asm/ovl56/ovl56.bss.o(.bss);
    }
    END_NOLOAD(ovl56)

    BEGIN_SEG(ovl57, 0x80131B00)
    {
        asm/ovl57/ovl57.text.o(.text);
        asm/ovl57/ovl57.data.o(.data);
    }
    END_SEG(ovl57)
    BEGIN_NOLOAD(ovl57)
    {
        asm/ovl57/ovl57.bss.o(.bss);
    }
    END_NOLOAD(ovl57)

    BEGIN_SEG(ovl58, 0x80131B00)
    {
        asm/ovl58/ovl58.text.o(.text);
        asm/ovl58/ovl58.data.o(.data);
    }
    END_SEG(ovl58)
    BEGIN_NOLOAD(ovl58)
    {
        asm/ovl58/ovl58.bss.o(.bss);
    }
    END_NOLOAD(ovl58)

    BEGIN_SEG(ovl59, 0x80131B00)
    {
        asm/ovl59/ovl59.text.o(.text);
        asm/ovl59/ovl59.data.o(.data);
    }
    END_SEG(ovl59)
    BEGIN_NOLOAD(ovl59)
    {
        asm/ovl59/ovl59.bss.o(.bss);
    }
    END_NOLOAD(ovl59)

    BEGIN_SEG(ovl62, 0x80131B00)
    {
        asm/ovl62/ovl62.text.o(.text);
        asm/ovl62/ovl62.data.o(.data);
    }
    END_SEG(ovl62)
    BEGIN_NOLOAD(ovl62)
    {
        asm/ovl62/ovl62.bss.o(.bss);
    }
    END_NOLOAD(ovl62)

    BEGIN_SEG(ovl63, 0x8018D0C0)
    {
        asm/ovl63/ovl63.text.o(.text);
        asm/ovl63/ovl63.data.o(.data);
    }
    END_SEG(ovl63)
    BEGIN_NOLOAD(ovl63)
    {
        asm/ovl63/ovl63.bss.o(.bss);
    }
    END_NOLOAD(ovl63)

    BEGIN_SEG(ovl64, 0x8018D0C0)
    {
        asm/ovl64/ovl64.text.o(.text);
        asm/ovl64/ovl64.data.o(.data);
    }
    END_SEG(ovl64)
    BEGIN_NOLOAD(ovl64)
    {
        asm/ovl64/ovl64.bss.o(.bss);
    }
    END_NOLOAD(ovl64)

    BEGIN_SEG(ovl16, 0x800D6490)
    {
        asm/ovl16/ovl16.text.o(.text);
        asm/ovl16/ovl16.data.o(.data);
    }
    END_SEG(ovl16)
    BEGIN_NOLOAD(ovl16)
    {
        asm/ovl16/ovl16.bss.o(.bss);
    }
    END_NOLOAD(ovl16)

    BEGIN_SEG(ovl8, 0x80371460)
    {
        asm/ovl8/ovl8.text.o(.text);
        asm/ovl8/ovl8.data.o(.data);
    }
    END_SEG(ovl8)
    BEGIN_NOLOAD(ovl8)
    {
        asm/ovl8/ovl8.bss.o(.bss);
    }
    END_NOLOAD(ovl8)

    BEGIN_SEG(ovl9, 0x80369240)
    {
        asm/ovl9/ovl9.text.o(.text);
        asm/ovl9/ovl9.data.o(.data);
    }
    END_SEG(ovl9)
    BEGIN_NOLOAD(ovl9)
    {
        asm/ovl9/ovl9.bss.o(.bss);
    }
    END_NOLOAD(ovl9)

    /* End of Code */

    BEGIN_SEG(resources, 0)
    {
        resources/resources.o(.filetable .data);
    }
    END_SEG(resources)

    BEGIN_SEG(imgbank, 0)
    {
        sprites/bank1-info.o(.data);
        sprites/bank1.o(.header .rodata);
        sprites/bank2-info.o(.data);
        sprites/bank2.o(.header .rodata);
        sprites/bank3-info.o(.data);
        sprites/bank3.o(.header .rodata);
        sprites/bank4-info.o(.data);
        sprites/bank4.o(.header .rodata);
        sprites/bank5-info.o(.data);
        sprites/bank5.o(.header .rodata);
        sprites/bank6-info.o(.data);
        sprites/bank6.o(.header .rodata);
        sprites/bank7-info.o(.data);
        sprites/bank7.o(.header .rodata);
        sprites/bank8-info.o(.data);
        sprites/bank8.o(.header .rodata);
        sprites/bank9-info.o(.data);
        sprites/bank9.o(.header .rodata);
    }
    END_SEG(imgbank)

    BEGIN_SEG(audio, 0)
    {
        audio/S1_music.sbk.o(.data);
        audio/B1_sounds1.ctl.o(.data);
        audio/B1_sounds1.tbl.o(.data);
        audio/B1_sounds2.ctl.o(.data);
        audio/B1_sounds2.tbl.o(.data);
    }
    END_SEG(audio)

    BEGIN_SEG(unknown, 0)
    {
        unknown/F573D0.o(.data);
        unknown/F57BF0.o(.data);
        unknown/F5A9C0.o(.data);
    }
    END_SEG(unknown)

    /DISCARD/ :
    {
        *(*);
    }
}
