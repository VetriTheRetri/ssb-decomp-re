let P = < O : Text | A : { lib : Text, objs : List Text } >
let Section = < Text | Data | Rodata | BSS | Filetable | Files | Header >
let File = { source : P , sections : List Section }
-- create a file using `sections` from `source` object
let NewFile = \(sections: List Section) -> \(source: P) -> {source, sections}
let StandardFile = NewFile [ Section.Text, Section.Data, Section.Rodata, Section.BSS ]

let Obj = \(f : Text) -> StandardFile (P.O f)
let CustomObj = \(f : Text) -> \(s: List Section) -> NewFile s (P.O f)
let Lib = \(lib : Text) -> \(objs : List Text) -> StandardFile (P.A {lib, objs})
let Libultra = Lib "ultra"

let SegCommand = 
    { name : Text
    , files : List File
    }

let LoadKind = < Absolute : Natural | Overlay : Text >
let SpecialSegment = < Boot | System | Dynamic >

let Segment : Type = 
    SegCommand //\\
    { load  : LoadKind
    , special : Optional SpecialSegment
    }

let Command : Text -> List File -> SegCommand = 
    \(name : Text) ->
    \(files : List File) ->
        { name, files }

let BootSegment = 
    \(cmd : SegCommand) -> 
        cmd /\ 
        { load = LoadKind.Absolute 0xA4000000
        , special = Some SpecialSegment.Boot
        }
let SystemSegment = 
    \(cmd : SegCommand) -> 
        cmd /\ 
        { load = LoadKind.Absolute 0x80000400
        , special = Some SpecialSegment.System 
        }
let DynamicSegment : SegCommand -> Natural -> Segment =
    \(cmd : SegCommand) -> 
    \(addr : Natural) ->
        cmd /\ 
        { load = LoadKind.Absolute addr
        , special = Some SpecialSegment.Dynamic
        }
let OverlayAfter =
    \(base : SegCommand) ->
    \(cmd : SegCommand) -> 
        cmd /\ 
        { load = LoadKind.Overlay base.name
        , special = Some SpecialSegment.Dynamic
        }
let ZeroSegment = 
    \(cmd : SegCommand) -> 
        cmd /\ 
        { load = LoadKind.Absolute 0
        , special = None SpecialSegment
        }
let SpriteBank = ZeroSegment


let Boot = Command "boot" 
    [ CustomObj "asm/header.o" [ Section.Rodata ]
    , CustomObj "asm/boot/boot.o" [ Section.Text, Section.Data ]
    ]
let System = Command "system"
    [ Obj "asm/entry.o"
    , Obj "src/sys/main.o"
    , Obj "src/sys/thread3.asm.o"
    , Obj "src/sys/dma.asm.o"
    , Obj "src/sys/thread6.asm.o"
    , Obj "src/sys/gtl.asm.o"
    , Obj "src/sys/ml.o"
    , Obj "src/sys/system_00.o"
    , Obj "src/sys/rdp_reset.asm.o"
    , Obj "src/sys/om.asm.o"
    , Obj "src/sys/system_03.asm.o"
    , Obj "src/sys/system_03_1.asm.o"
    , Obj "src/sys/system_04.asm.o"
    , Obj "src/sys/obj_renderer.asm.o"
    , Obj "src/sys/trig_rand.asm.o"
    , Obj "src/sys/vec.asm.o"
    , Obj "src/sys/hal_gu.asm.o"
    , Obj "src/sys/interpolation.asm.o"
    , Obj "asm/system/hal_audio.o"
    , Obj "src/sys/crash.asm.o"
    , Libultra 
        [ "color.o"
        , "setattribute.o"
        --, "sprite.o" Minor reordering to fix
        ]
    , Obj "asm/ultra/sprite.o"
    , Libultra 
        [ "clearattribute.o"
        , "hide.o"
        , "show.o"
        , "spscale.o"
        ]
    , Obj "asm/ultra/audio.o"
    , Libultra 
        [ "vimodepallan1.o"
        , "sendmesg.o"
        , "stopthread.o"
        , "recvmesg.o"
        , "setintmask.o"
        , "sinf.o"
        , "sptask.o"
        , "destroythread.o"
        , "ll.o"
        , "exceptasm.o"
        , "thread.o"
        , "bzero.o"
        ]
    , Obj "asm/ultra/motor.o"
    , Libultra 
        [ "siacs.o"
        , "controller.o"
        , "createthread.o"
        ]
    , Obj "asm/ultra/contreaddata.o"
    , Libultra
        [ "virtualtophysical.o"
        , "writebackdcache.o"
        , "initialize.o"
        , "kdebugserver.o"
        ]
    , Obj "asm/ultra/createspeedparam.o"
    , Obj "asm/ultra/romhandles.o"
    , Libultra 
        [ "pirawread.o"
        ]
    , Obj "asm/ultra/libultra.nops1.o"
    , Libultra 
        [ "setsr.o"
        , "getsr.o"
        , "vigetnextframebuf.o"
        , "sprawdma.o"
        , "sirawdma.o"
        , "epilinkhandle.o"
        , "viblack.o"
        , "sirawread.o"
        , "sptaskyield.o"
        , "mtxutil.o"
        , "visetmode.o"
        , "probetlb.o"
        , "pimgr.o"
        , "piacs.o"
        ]
    , Obj "asm/ultra/libultra.nops2.o"
    , Libultra
        [ "devmgr.o"
        , "pirawdma.o"
        , "getcount.o"
        , "seteventmesg.o"
        , "sqrtf.o"
        , "afterprenmi.o"
        , "contquery.o"
        , "xprintf.o"
        , "unmaptlball.o"
        , "epidma.o"
        , "string.o"
        , "createmesgqueue.o"
        , "invalicache.o"
        , "invaldcache.o"
        , "sp.o"
        , "si.o"
        , "jammesg.o"
        , "setthreadpri.o"
        , "getthreadpri.o"
        , "viswapbuf.o"
        , "mtxcatf.o"
        ]
    , Obj "asm/ultra/epirawdma.o"
    , Libultra 
        [ "sptaskyielded.o"
        , "gettime.o"
        , "timerintr.o"
        , "vimodentsclan1.o"
        , "vimodempallan1.o"
        , "setglobalintmask.o"
        , "aisetfreq.o"
        , "normalize.o"
        , "setcompare.o"
        , "getactivequeue.o"
        , "bcopy.o"
        , "copy.o"
        , "resetglobalintmask.o"
        , "interrupt.o"
        , "vi.o"
        , "viswapcontext.o"
        , "pigetcmdq.o"
        , "cosf.o"
        , "libm_vals.o"
        , "settime.o"
        , "visetevent.o"
        , "cartrominit.o"
        , "pfsselectbank.o"
        , "setfpccsr.o"
        ]
    , Obj "asm/ultra/epirawread.o"
    , Libultra 
        [ "yieldthread.o"
        , "cents2ratio.o"
        ]
    , Obj "asm/ultra/contramwrite.o"
    , Obj "asm/ultra/pfsgetstatus.o"
    , Obj "asm/ultra/contpfs.o"
    , Libultra 
        [ "bcmp.o"
        ]
    , Obj "asm/ultra/contramread.o"
    , Obj "asm/ultra/crc.o"
    , Libultra 
        [ "pfsisplug.o"
        ]
    , Obj "asm/ultra/epirawwrite.o"
    , Libultra 
        [ "settimer.o"
        , "xldtob.o"
        , "ldiv.o"
        , "xlitob.o"
        , "sirawwrite.o"
        , "dpsetnextbuf.o"
        , "dp.o"
        , "spsetstat.o"
        , "spgetstat.o"
        ]
    , Obj "asm/ultra/libultra.nops3.o"
    , Obj "asm/ultra/vimgr.o"
    , Libultra
        [ "vigetcurrcontext.o"
        , "writebackdcacheall.o"
        , "startthread.o"
        , "visetyscale.o"
        , "llcvt.o"
        , "aisetnextbuf.o"
        , "ai.o"
        , "vigetcurrframebuf.o"
        , "spsetpc.o"
        , "setwatchlo.o"
        ]
    , CustomObj "asm/system/unknown.rodata.o" [ Section.Rodata ]
    , Obj "asm/ultra/rsp.o"
    ]
let LoadOvl = Command "scenemgr" 
    [ Obj "src/scenemgr/timestamp.o"
    , Obj "src/scenemgr/scene_manager.o"
    ]
let Ovl0 = Command "ovl0" 
    [ Obj "src/ovl0/halbitmap.asm.o"
    , Obj "asm/ovl0/halbitmap.o"
    , Obj "src/ovl0/reloc_data_mgr.asm.o"
    , Obj "asm/ovl0/ovl0_nops.o"
    , Obj "src/ovl0/halsprite.asm.o"
    , Obj "asm/ovl0/ovl0_2.o"
    , Obj "asm/ovl0/ovl0_3.o"
    , Obj "asm/ovl0/ovl0_4.o"
    ]
let Ovl1 = Command "ovl1" 
    [ CustomObj "asm/ovl1/ovl1.text.o" [ Section.Text ]
    , CustomObj "asm/ovl1/ovl1.data.o" [ Section.Data ]
    , CustomObj "asm/ovl1/ovl1.bss.o" [ Section.BSS ]
    ]
let Ovl2 = Command "ovl2" 
    [ CustomObj "asm/ovl2/ovl2.text.o" [ Section.Text ]
    , CustomObj "asm/ovl2/ovl2.data.o" [ Section.Data ]
    , CustomObj "asm/ovl2/ovl2.bss.o" [ Section.BSS ]
    ]
let Ovl3 = Command "ovl3" 
    [ CustomObj "asm/ovl3/ovl3.text.o" [ Section.Text ]
    , CustomObj "asm/ovl3/ovl3.data.o" [ Section.Data ]
    , CustomObj "asm/ovl3/ovl3.bss.o" [ Section.BSS ]
    ]
let Ovl4 = Command "ovl4" 
    [ CustomObj "asm/ovl4/ovl4.text.o" [ Section.Text ]
    , CustomObj "asm/ovl4/ovl4.data.o" [ Section.Data ]
    , CustomObj "asm/ovl4/ovl4.bss.o" [ Section.BSS ]
    ]
let Ovl5 = Command "ovl5" 
    [ CustomObj "asm/ovl5/ovl5.text.o" [ Section.Text ]
    , CustomObj "asm/ovl5/ovl5.data.o" [ Section.Data ]
    , CustomObj "asm/ovl5/ovl5.bss.o" [ Section.BSS ]
    ]
let Ovl6 = Command "ovl6" 
    [ CustomObj "asm/ovl6/ovl6.text.o" [ Section.Text ]
    , CustomObj "asm/ovl6/ovl6.data.o" [ Section.Data ]
    , CustomObj "asm/ovl6/ovl6.bss.o" [ Section.BSS ]
    ]
let Ovl7 = Command "ovl7" 
    [ CustomObj "asm/ovl7/ovl7.text.o" [ Section.Text ]
    , CustomObj "asm/ovl7/ovl7.data.o" [ Section.Data ]
    , CustomObj "asm/ovl7/ovl7.bss.o" [ Section.BSS ]
    ]
let Ovl8 = Command "ovl8" 
    [ CustomObj "asm/ovl8/ovl8.text.o" [ Section.Text ]
    , CustomObj "asm/ovl8/ovl8.data.o" [ Section.Data ]
    , CustomObj "asm/ovl8/ovl8.bss.o" [ Section.BSS ]
    ]
let Ovl9 = Command "ovl9" 
    [ CustomObj "asm/ovl9/ovl9.text.o" [ Section.Text ]
    , CustomObj "asm/ovl9/ovl9.data.o" [ Section.Data ]
    , CustomObj "asm/ovl9/ovl9.bss.o" [ Section.BSS ]
    ]
let Ovl10 = Command "ovl10" 
    [ CustomObj "asm/ovl10/ovl10.text.o" [ Section.Text ]
    , CustomObj "asm/ovl10/ovl10.data.o" [ Section.Data ]
    , CustomObj "asm/ovl10/ovl10.bss.o" [ Section.BSS ]
    ]
let Ovl11 = Command "ovl11" 
    [ CustomObj "asm/ovl11/ovl11.text.o" [ Section.Text ]
    , CustomObj "asm/ovl11/ovl11.data.o" [ Section.Data ]
    , CustomObj "asm/ovl11/ovl11.bss.o" [ Section.BSS ]
    ]
let Ovl12 = Command "ovl12" 
    [ CustomObj "asm/ovl12/ovl12.text.o" [ Section.Text ]
    , CustomObj "asm/ovl12/ovl12.data.o" [ Section.Data ]
    , CustomObj "asm/ovl12/ovl12.bss.o" [ Section.BSS ]
    ]
let Ovl13 = Command "ovl13" 
    [ CustomObj "asm/ovl13/ovl13.text.o" [ Section.Text ]
    , CustomObj "asm/ovl13/ovl13.data.o" [ Section.Data ]
    , CustomObj "asm/ovl13/ovl13.bss.o" [ Section.BSS ]
    ]
let Ovl14 = Command "ovl14" 
    [ CustomObj "asm/ovl14/ovl14.text.o" [ Section.Text ]
    , CustomObj "asm/ovl14/ovl14.data.o" [ Section.Data ]
    , CustomObj "asm/ovl14/ovl14.bss.o" [ Section.BSS ]
    ]
let Ovl15 = Command "ovl15" 
    [ CustomObj "asm/ovl15/ovl15.text.o" [ Section.Text ]
    , CustomObj "asm/ovl15/ovl15.data.o" [ Section.Data ]
    , CustomObj "asm/ovl15/ovl15.bss.o" [ Section.BSS ]
    ]
let Ovl16 = Command "ovl16" 
    [ CustomObj "asm/ovl16/ovl16.text.o" [ Section.Text ]
    , CustomObj "asm/ovl16/ovl16.data.o" [ Section.Data ]
    , CustomObj "asm/ovl16/ovl16.bss.o" [ Section.BSS ]
    ]
let Ovl17 = Command "ovl17" 
    [ CustomObj "asm/ovl17/ovl17.text.o" [ Section.Text ]
    , CustomObj "asm/ovl17/ovl17.data.o" [ Section.Data ]
    , CustomObj "asm/ovl17/ovl17.bss.o" [ Section.BSS ]
    ]
let Ovl18 = Command "ovl18" 
    [ CustomObj "asm/ovl18/ovl18.text.o" [ Section.Text ]
    , CustomObj "asm/ovl18/ovl18.data.o" [ Section.Data ]
    , CustomObj "asm/ovl18/ovl18.bss.o" [ Section.BSS ]
    ]
let Ovl19 = Command "ovl19" 
    [ CustomObj "asm/ovl19/ovl19.text.o" [ Section.Text ]
    , CustomObj "asm/ovl19/ovl19.data.o" [ Section.Data ]
    , CustomObj "asm/ovl19/ovl19.bss.o" [ Section.BSS ]
    ]
let Ovl20 = Command "ovl20" 
    [ CustomObj "asm/ovl20/ovl20.text.o" [ Section.Text ]
    , CustomObj "asm/ovl20/ovl20.data.o" [ Section.Data ]
    , CustomObj "asm/ovl20/ovl20.bss.o" [ Section.BSS ]
    ]
let Ovl21 = Command "ovl21" 
    [ CustomObj "asm/ovl21/ovl21.text.o" [ Section.Text ]
    , CustomObj "asm/ovl21/ovl21.data.o" [ Section.Data ]
    , CustomObj "asm/ovl21/ovl21.bss.o" [ Section.BSS ]
    ]
let Ovl22 = Command "ovl22" 
    [ CustomObj "asm/ovl22/ovl22.text.o" [ Section.Text ]
    , CustomObj "asm/ovl22/ovl22.data.o" [ Section.Data ]
    , CustomObj "asm/ovl22/ovl22.bss.o" [ Section.BSS ]
    ]
let Ovl23 = Command "ovl23" 
    [ CustomObj "asm/ovl23/ovl23.text.o" [ Section.Text ]
    , CustomObj "asm/ovl23/ovl23.data.o" [ Section.Data ]
    , CustomObj "asm/ovl23/ovl23.bss.o" [ Section.BSS ]
    ]
let Ovl24 = Command "ovl24" 
    [ CustomObj "asm/ovl24/ovl24.text.o" [ Section.Text ]
    , CustomObj "asm/ovl24/ovl24.data.o" [ Section.Data ]
    , CustomObj "asm/ovl24/ovl24.bss.o" [ Section.BSS ]
    ]
let Ovl25 = Command "ovl25" 
    [ CustomObj "asm/ovl25/ovl25.text.o" [ Section.Text ]
    , CustomObj "asm/ovl25/ovl25.data.o" [ Section.Data ]
    , CustomObj "asm/ovl25/ovl25.bss.o" [ Section.BSS ]
    ]
let Ovl26 = Command "ovl26" 
    [ CustomObj "asm/ovl26/ovl26.text.o" [ Section.Text ]
    , CustomObj "asm/ovl26/ovl26.data.o" [ Section.Data ]
    , CustomObj "asm/ovl26/ovl26.bss.o" [ Section.BSS ]
    ]
let Ovl27 = Command "ovl27" 
    [ CustomObj "asm/ovl27/ovl27.text.o" [ Section.Text ]
    , CustomObj "asm/ovl27/ovl27.data.o" [ Section.Data ]
    , CustomObj "asm/ovl27/ovl27.bss.o" [ Section.BSS ]
    ]
let Ovl28 = Command "ovl28" 
    [ CustomObj "asm/ovl28/ovl28.text.o" [ Section.Text ]
    , CustomObj "asm/ovl28/ovl28.data.o" [ Section.Data ]
    , CustomObj "asm/ovl28/ovl28.bss.o" [ Section.BSS ]
    ]
let Ovl29 = Command "ovl29" 
    [ CustomObj "asm/ovl29/ovl29.text.o" [ Section.Text ]
    , CustomObj "asm/ovl29/ovl29.data.o" [ Section.Data ]
    , CustomObj "asm/ovl29/ovl29.bss.o" [ Section.BSS ]
    ]
let Ovl30 = Command "ovl30" 
    [ CustomObj "asm/ovl30/ovl30.text.o" [ Section.Text ]
    , CustomObj "asm/ovl30/ovl30.data.o" [ Section.Data ]
    , CustomObj "asm/ovl30/ovl30.bss.o" [ Section.BSS ]
    ]
let Ovl31 = Command "ovl31" 
    [ CustomObj "asm/ovl31/ovl31.text.o" [ Section.Text ]
    , CustomObj "asm/ovl31/ovl31.data.o" [ Section.Data ]
    , CustomObj "asm/ovl31/ovl31.bss.o" [ Section.BSS ]
    ]
let Ovl32 = Command "ovl32" 
    [ CustomObj "asm/ovl32/ovl32.text.o" [ Section.Text ]
    , CustomObj "asm/ovl32/ovl32.data.o" [ Section.Data ]
    , CustomObj "asm/ovl32/ovl32.bss.o" [ Section.BSS ]
    ]
let Ovl33 = Command "ovl33" 
    [ CustomObj "asm/ovl33/ovl33.text.o" [ Section.Text ]
    , CustomObj "asm/ovl33/ovl33.data.o" [ Section.Data ]
    , CustomObj "asm/ovl33/ovl33.bss.o" [ Section.BSS ]
    ]
let Ovl34 = Command "ovl34" 
    [ CustomObj "asm/ovl34/ovl34.text.o" [ Section.Text ]
    , CustomObj "asm/ovl34/ovl34.data.o" [ Section.Data ]
    , CustomObj "asm/ovl34/ovl34.bss.o" [ Section.BSS ]
    ]
let Ovl35 = Command "ovl35" 
    [ CustomObj "asm/ovl35/ovl35.text.o" [ Section.Text ]
    , CustomObj "asm/ovl35/ovl35.data.o" [ Section.Data ]
    , CustomObj "asm/ovl35/ovl35.bss.o" [ Section.BSS ]
    ]
let Ovl36 = Command "ovl36" 
    [ CustomObj "asm/ovl36/ovl36.text.o" [ Section.Text ]
    , CustomObj "asm/ovl36/ovl36.data.o" [ Section.Data ]
    , CustomObj "asm/ovl36/ovl36.bss.o" [ Section.BSS ]
    ]
let Ovl37 = Command "ovl37" 
    [ CustomObj "asm/ovl37/ovl37.text.o" [ Section.Text ]
    , CustomObj "asm/ovl37/ovl37.data.o" [ Section.Data ]
    , CustomObj "asm/ovl37/ovl37.bss.o" [ Section.BSS ]
    ]
let Ovl38 = Command "ovl38" 
    [ CustomObj "asm/ovl38/ovl38.text.o" [ Section.Text ]
    , CustomObj "asm/ovl38/ovl38.data.o" [ Section.Data ]
    , CustomObj "asm/ovl38/ovl38.bss.o" [ Section.BSS ]
    ]
let Ovl39 = Command "ovl39" 
    [ CustomObj "asm/ovl39/ovl39.text.o" [ Section.Text ]
    , CustomObj "asm/ovl39/ovl39.data.o" [ Section.Data ]
    , CustomObj "asm/ovl39/ovl39.bss.o" [ Section.BSS ]
    ]
let Ovl40 = Command "ovl40" 
    [ CustomObj "asm/ovl40/ovl40.text.o" [ Section.Text ]
    , CustomObj "asm/ovl40/ovl40.data.o" [ Section.Data ]
    , CustomObj "asm/ovl40/ovl40.bss.o" [ Section.BSS ]
    ]
let Ovl41 = Command "ovl41" 
    [ CustomObj "asm/ovl41/ovl41.text.o" [ Section.Text ]
    , CustomObj "asm/ovl41/ovl41.data.o" [ Section.Data ]
    , CustomObj "asm/ovl41/ovl41.bss.o" [ Section.BSS ]
    ]
let Ovl42 = Command "ovl42" 
    [ CustomObj "asm/ovl42/ovl42.text.o" [ Section.Text ]
    , CustomObj "asm/ovl42/ovl42.data.o" [ Section.Data ]
    , CustomObj "asm/ovl42/ovl42.bss.o" [ Section.BSS ]
    ]
let Ovl43 = Command "ovl43" 
    [ CustomObj "asm/ovl43/ovl43.text.o" [ Section.Text ]
    , CustomObj "asm/ovl43/ovl43.data.o" [ Section.Data ]
    , CustomObj "asm/ovl43/ovl43.bss.o" [ Section.BSS ]
    ]
let Ovl44 = Command "ovl44" 
    [ CustomObj "asm/ovl44/ovl44.text.o" [ Section.Text ]
    , CustomObj "asm/ovl44/ovl44.data.o" [ Section.Data ]
    , CustomObj "asm/ovl44/ovl44.bss.o" [ Section.BSS ]
    ]
let Ovl45 = Command "ovl45" 
    [ CustomObj "asm/ovl45/ovl45.text.o" [ Section.Text ]
    , CustomObj "asm/ovl45/ovl45.data.o" [ Section.Data ]
    , CustomObj "asm/ovl45/ovl45.bss.o" [ Section.BSS ]
    ]
let Ovl46 = Command "ovl46" 
    [ CustomObj "asm/ovl46/ovl46.text.o" [ Section.Text ]
    , CustomObj "asm/ovl46/ovl46.data.o" [ Section.Data ]
    , CustomObj "asm/ovl46/ovl46.bss.o" [ Section.BSS ]
    ]
let Ovl47 = Command "ovl47" 
    [ CustomObj "asm/ovl47/ovl47.text.o" [ Section.Text ]
    , CustomObj "asm/ovl47/ovl47.data.o" [ Section.Data ]
    , CustomObj "asm/ovl47/ovl47.bss.o" [ Section.BSS ]
    ]
let Ovl48 = Command "ovl48" 
    [ CustomObj "asm/ovl48/ovl48.text.o" [ Section.Text ]
    , CustomObj "asm/ovl48/ovl48.data.o" [ Section.Data ]
    , CustomObj "asm/ovl48/ovl48.bss.o" [ Section.BSS ]
    ]
let Ovl49 = Command "ovl49" 
    [ CustomObj "asm/ovl49/ovl49.text.o" [ Section.Text ]
    , CustomObj "asm/ovl49/ovl49.data.o" [ Section.Data ]
    , CustomObj "asm/ovl49/ovl49.bss.o" [ Section.BSS ]
    ]
let Ovl50 = Command "ovl50" 
    [ CustomObj "asm/ovl50/ovl50.text.o" [ Section.Text ]
    , CustomObj "asm/ovl50/ovl50.data.o" [ Section.Data ]
    , CustomObj "asm/ovl50/ovl50.bss.o" [ Section.BSS ]
    ]
let Ovl51 = Command "ovl51" 
    [ CustomObj "asm/ovl51/ovl51.text.o" [ Section.Text ]
    , CustomObj "asm/ovl51/ovl51.data.o" [ Section.Data ]
    , CustomObj "asm/ovl51/ovl51.bss.o" [ Section.BSS ]
    ]
let Ovl52 = Command "ovl52" 
    [ CustomObj "asm/ovl52/ovl52.text.o" [ Section.Text ]
    , CustomObj "asm/ovl52/ovl52.data.o" [ Section.Data ]
    , CustomObj "asm/ovl52/ovl52.bss.o" [ Section.BSS ]
    ]
let Ovl53 = Command "ovl53" 
    [ CustomObj "asm/ovl53/ovl53.text.o" [ Section.Text ]
    , CustomObj "asm/ovl53/ovl53.data.o" [ Section.Data ]
    , CustomObj "asm/ovl53/ovl53.bss.o" [ Section.BSS ]
    ]
let Ovl54 = Command "ovl54" 
    [ CustomObj "asm/ovl54/ovl54.text.o" [ Section.Text ]
    , CustomObj "asm/ovl54/ovl54.data.o" [ Section.Data ]
    , CustomObj "asm/ovl54/ovl54.bss.o" [ Section.BSS ]
    ]
let Ovl55 = Command "ovl55" 
    [ CustomObj "asm/ovl55/ovl55.text.o" [ Section.Text ]
    , CustomObj "asm/ovl55/ovl55.data.o" [ Section.Data ]
    , CustomObj "asm/ovl55/ovl55.bss.o" [ Section.BSS ]
    ]
let Ovl56 = Command "ovl56" 
    [ CustomObj "asm/ovl56/ovl56.text.o" [ Section.Text ]
    , CustomObj "asm/ovl56/ovl56.data.o" [ Section.Data ]
    , CustomObj "asm/ovl56/ovl56.bss.o" [ Section.BSS ]
    ]
let Ovl57 = Command "ovl57" 
    [ CustomObj "asm/ovl57/ovl57.text.o" [ Section.Text ]
    , CustomObj "asm/ovl57/ovl57.data.o" [ Section.Data ]
    , CustomObj "asm/ovl57/ovl57.bss.o" [ Section.BSS ]
    ]
let Ovl58 = Command "ovl58" 
    [ CustomObj "asm/ovl58/ovl58.text.o" [ Section.Text ]
    , CustomObj "asm/ovl58/ovl58.data.o" [ Section.Data ]
    , CustomObj "asm/ovl58/ovl58.bss.o" [ Section.BSS ]
    ]
let Ovl59 = Command "ovl59" 
    [ CustomObj "asm/ovl59/ovl59.text.o" [ Section.Text ]
    , CustomObj "asm/ovl59/ovl59.data.o" [ Section.Data ]
    , CustomObj "asm/ovl59/ovl59.bss.o" [ Section.BSS ]
    ]
let Ovl60 = Command "ovl60" 
    [ CustomObj "asm/ovl60/ovl60.text.o" [ Section.Text ]
    , CustomObj "asm/ovl60/ovl60.data.o" [ Section.Data ]
    , CustomObj "asm/ovl60/ovl60.bss.o" [ Section.BSS ]
    ]
let Ovl61 = Command "ovl61" 
    [ CustomObj "asm/ovl61/ovl61.text.o" [ Section.Text ]
    , CustomObj "asm/ovl61/ovl61.data.o" [ Section.Data ]
    , CustomObj "asm/ovl61/ovl61.bss.o" [ Section.BSS ]
    ]
let Ovl62 = Command "ovl62" 
    [ CustomObj "asm/ovl62/ovl62.text.o" [ Section.Text ]
    , CustomObj "asm/ovl62/ovl62.data.o" [ Section.Data ]
    , CustomObj "asm/ovl62/ovl62.bss.o" [ Section.BSS ]
    ]
let Ovl63 = Command "ovl63" 
    [ CustomObj "asm/ovl63/ovl63.text.o" [ Section.Text ]
    , CustomObj "asm/ovl63/ovl63.data.o" [ Section.Data ]
    , CustomObj "asm/ovl63/ovl63.bss.o" [ Section.BSS ]
    ]
let Ovl64 = Command "ovl64" 
    [ CustomObj "asm/ovl64/ovl64.text.o" [ Section.Text ]
    , CustomObj "asm/ovl64/ovl64.data.o" [ Section.Data ]
    , CustomObj "asm/ovl64/ovl64.bss.o" [ Section.BSS ]
    ]
let Ovl65 = Command "ovl65" 
    [ CustomObj "asm/ovl65/ovl65.text.o" [ Section.Text ]
    , CustomObj "asm/ovl65/ovl65.data.o" [ Section.Data ]
    , CustomObj "asm/ovl65/ovl65.bss.o" [ Section.BSS ]
    ]

let Resources = Command "resources"
    [ CustomObj "resources/rld.o" [ Section.Filetable, Section.Files ]
    ]

let SprInfo = \(n: Text) -> \(f: Text) -> Command n [ CustomObj f [Section.Data] ]
let SprImg  = \(n: Text) -> \(f: Text) -> Command n [ CustomObj f [Section.Header, Section.Rodata] ]

let SprBank1Info = SprInfo "bank1info" "sprites/bank1-info.o"
let SprBank1Img  = SprImg "bank1img" "sprites/bank1.o"

let SprBank2Info = SprInfo "bank2info" "sprites/bank2-info.o"
let SprBank2Img  = SprImg "bank2img" "sprites/bank2.o"

let SprBank3Info = SprInfo "bank3info" "sprites/bank3-info.o"
let SprBank3Img  = SprImg "bank3img" "sprites/bank3.o"

let SprBank4Info = SprInfo "bank4info" "sprites/bank4-info.o"
let SprBank4Img  = SprImg "bank4img" "sprites/bank4.o"

let SprBank5Info = SprInfo "bank5info" "sprites/bank5-info.o"
let SprBank5Img  = SprImg "bank5img" "sprites/bank5.o"

let SprBank6Info = SprInfo "bank6info" "sprites/bank6-info.o"
let SprBank6Img  = SprImg "bank6img" "sprites/bank6.o"

let SprBank7Info = SprInfo "bank7info" "sprites/bank7-info.o"
let SprBank7Img  = SprImg "bank7img" "sprites/bank7.o"

let SprBank8Info = SprInfo "bank8info" "sprites/bank8-info.o"
let SprBank8Img  = SprImg "bank8img" "sprites/bank8.o"

let SprBank9Info = SprInfo "bank9info" "sprites/bank9-info.o"
let SprBank9Img  = SprImg "bank9img" "sprites/bank9.o"

let AudioSeg = Command "audio"
    [ CustomObj "audio/S1_music.sbk.o" [ Section.Data ]
    , CustomObj "audio/B1_sounds1.ctl.o" [ Section.Data ]
    , CustomObj "audio/B1_sounds1.tbl.o" [ Section.Data ]
    , CustomObj "audio/B1_sounds2.ctl.o" [ Section.Data ]
    , CustomObj "audio/B1_sounds2.tbl.o" [ Section.Data ]
    ]

let UnknownDataSeg = Command "unknown"
    [ CustomObj "unknown/F573D0.o" [ Section.Data ]
    , CustomObj "unknown/F57BF0.o" [ Section.Data ]
    , CustomObj "unknown/F5A9C0.o" [ Section.Data ]
    ]

in

[ BootSegment Boot
, SystemSegment System
, DynamicSegment LoadOvl 0x800A1980
, DynamicSegment Ovl0 0x800C7840
, OverlayAfter Ovl0 Ovl2
, OverlayAfter Ovl2 Ovl3
, OverlayAfter Ovl8 Ovl1
, OverlayAfter Ovl3 Ovl4
, OverlayAfter Ovl3 Ovl5
, OverlayAfter Ovl3 Ovl65
, OverlayAfter Ovl3 Ovl6
, OverlayAfter Ovl3 Ovl7
, OverlayAfter Ovl2 Ovl10
, OverlayAfter Ovl0 Ovl11
, OverlayAfter Ovl0 Ovl12
, OverlayAfter Ovl2 Ovl13
, OverlayAfter Ovl2 Ovl14
, OverlayAfter Ovl2 Ovl17
, OverlayAfter Ovl2 Ovl18
, OverlayAfter Ovl2 Ovl60
, OverlayAfter Ovl2 Ovl61
, OverlayAfter Ovl2 Ovl19
, OverlayAfter Ovl2 Ovl20
, OverlayAfter Ovl2 Ovl21
, OverlayAfter Ovl2 Ovl22
, OverlayAfter Ovl2 Ovl23
, OverlayAfter Ovl2 Ovl24
, OverlayAfter Ovl2 Ovl25
, OverlayAfter Ovl2 Ovl26
, OverlayAfter Ovl2 Ovl27
, OverlayAfter Ovl2 Ovl28
, OverlayAfter Ovl2 Ovl29
, OverlayAfter Ovl2 Ovl30
, OverlayAfter Ovl0 Ovl15
, OverlayAfter Ovl2 Ovl31
, OverlayAfter Ovl2 Ovl32
, OverlayAfter Ovl2 Ovl33
, OverlayAfter Ovl2 Ovl34
, OverlayAfter Ovl2 Ovl35
, OverlayAfter Ovl3 Ovl36
, OverlayAfter Ovl3 Ovl37
, OverlayAfter Ovl3 Ovl38
, OverlayAfter Ovl3 Ovl39
, OverlayAfter Ovl3 Ovl40
, OverlayAfter Ovl3 Ovl41
, OverlayAfter Ovl3 Ovl42
, OverlayAfter Ovl3 Ovl43
, OverlayAfter Ovl2 Ovl44
, OverlayAfter Ovl2 Ovl45
, OverlayAfter Ovl2 Ovl46
, OverlayAfter Ovl2 Ovl47
, OverlayAfter Ovl2 Ovl48
, OverlayAfter Ovl2 Ovl49
, OverlayAfter Ovl2 Ovl50
, OverlayAfter Ovl3 Ovl51
, OverlayAfter Ovl2 Ovl52
, OverlayAfter Ovl2 Ovl53
, OverlayAfter Ovl2 Ovl54
, OverlayAfter Ovl2 Ovl55
, OverlayAfter Ovl2 Ovl56
, OverlayAfter Ovl2 Ovl57
, OverlayAfter Ovl2 Ovl58
, OverlayAfter Ovl2 Ovl59
, OverlayAfter Ovl2 Ovl62
, OverlayAfter Ovl3 Ovl63
, OverlayAfter Ovl3 Ovl64
, OverlayAfter Ovl0 Ovl16
, OverlayAfter Ovl9 Ovl8
, DynamicSegment Ovl9 0x80369240
, ZeroSegment Resources
, ZeroSegment SprBank1Info
, ZeroSegment SprBank1Img
, ZeroSegment SprBank2Info
, ZeroSegment SprBank2Img
, ZeroSegment SprBank3Info
, ZeroSegment SprBank3Img
, ZeroSegment SprBank4Info
, ZeroSegment SprBank4Img
, ZeroSegment SprBank5Info
, ZeroSegment SprBank5Img
, ZeroSegment SprBank6Info
, ZeroSegment SprBank6Img
, ZeroSegment SprBank7Info
, ZeroSegment SprBank7Img
, ZeroSegment SprBank8Info
, ZeroSegment SprBank8Img
, ZeroSegment SprBank9Info
, ZeroSegment SprBank9Img
, ZeroSegment AudioSeg
, ZeroSegment UnknownDataSeg
]
