#ifndef _OBJTYPES_H_
#define _OBJTYPES_H_

#include <macros.h>
#include <config.h>
#include <ssb_types.h>
#include <PR/ultratypes.h>
#include <PR/mbi.h>
#include <PR/os.h>
#include <PR/sp.h>
#include <PR/gu.h>

#include <sys/trig_rand.h>
#include <sys/vector.h>
#include <sys/taskman.h>

#include <sys/objdef.h>

// General OM defines
#define OM_COMMON_MAX_LINKS     33
#define OM_COMMON_MAX_DL_LINKS  65

// GObj defines
#define GOBJ_FLAG_NONE              (0)
#define GOBJ_FLAG_HIDDEN            (1 << 0)
#define GOBJ_FLAG_NOANIM            (1 << 1)    // Skip applying aninmation values?
#define GOBJ_FLAG_NOEJECT           (1 << 6)    // I actually don't know what this really does

#define GOBJ_LINKORDER_DEFAULT      0x80000000
#define GOBJ_DLLINKORDER_DEFAULT    0x80000000

#define GOBJ_CAMTAG_DEFAULT         0xFFFFFFFF

// DObj defines
#define DOBJ_PARENT_NULL            ((DObj*)1)

#define DOBJ_FLAG_NONE              (0)
#define DOBJ_FLAG_NOTEXTURE         (1 << 0)
#define DOBJ_FLAG_HIDDEN            (1 << 1)

#define DOBJ_ARRAY_MAX              18

// AObj defines
#define AOBJ_ANIM_NULL              F32_MIN             // Used to mark the lack of frames remaining in an animation
#define AOBJ_ANIM_CHANGED           (F32_MIN / 2.0F)    // ???
#define AOBJ_ANIM_END               (F32_MIN / 3.0F)    // Used to mark the end of an animation?

// MObj defines
#define MOBJ_FLAG_PRIMCOLOR         (1 << 9)
#define MOBJ_FLAG_ENVCOLOR          (1 << 10)
#define MOBJ_FLAG_BLENDCOLOR        (1 << 11)
#define MOBJ_FLAG_LIGHT1            (1 << 12)
#define MOBJ_FLAG_LIGHT2            (1 << 13)

// Camera defines

// Create mask of draw layer (known in Smash Remix lingo as "room") to render
#define CAMERA_MASK_DLLINK(r) (1ULL << (r))

#define CAMERA_FLAG_ZBUFFER         0x1     // Use Z-Buffer depth image
#define CAMERA_FLAG_FILLCOLOR       0x2     // Use camera's packed RRGGBBAA `color` variable
#define CAMERA_FLAG_DLBUFFERS       0x4     // Update DLBuffers and DisplayList branches?
#define CAMERA_FLAG_IDENTIFIER      0x8     // If the 0x8 bit is 0, cam_tag is treated as a mask; if 1, it is treated as an ID
#define CAMERA_FLAG_GFXEND          0x10    // Run SCTaskGfxEnd task type?
#define CAMERA_FLAG_BRANCHSYNC      0x40    // Sync all Branch DLs with main DL buffers?

union GCUserData
{
    s32 s;
    u32 u;
    void *p;
};

// Half-sized AObj event struct for bigger animation scripts (used by fighters only)
union AObjEvent16
{
    s16 s;
    u16 u;

    struct
    {
        u16 opcode : 5;
        u16 flags : 10;
        u16 toggle : 1;

    } command;
};

// Normal-sized AObj event struct for common animation scripts
union AObjEvent32
{
    f32 f;
    s32 s;
    u32 u;
    void *p;

    struct
    {
        u32 opcode : 7;
        u32 flags : 10;
        u32 payload : 15;
        
    } command;
};

/*
 * This houses both types of AObj scripts; event32 is the standard type of script.
 * 
 * Only DObjs (and on top of that, only fighters) use the event16 script type, but
 * might as well have a union of both for the sake of convenience.
 * 
 * Note: later games (or Melee, at least) refer to the event16 scripts as "figatrees"
 */ 
union AObjScript
{
    AObjEvent16 *event16;
    AObjEvent32 *event32;
};

struct AObj
{
    AObj *next;
    u8 track;
    u8 kind;
    f32 length_invert;
    f32 length;
    f32 value_base;
    f32 value_target;
    f32 rate_base;
    f32 rate_target;
    void *interpolate;
};

struct GObjThread
{
    GObjThread *next;
    OSThread thread;
    u64 *stack;
    size_t stack_size;
};

struct GCThreadStackNode
{
    GCThreadStackNode *next;
    size_t stack_size;
    u64 stack[1];
}; // size == 0x08 + VLA

// List that connects lists of stack nodes of `size` bytes
struct GCThreadStackList 
{
    GCThreadStackList *next;
    GCThreadStackNode *stack;
    size_t size;
};

struct GObjProcess
{
    GObjProcess *link_next;
    GObjProcess *link_prev;
    GObjProcess *priority_next; // This is more than likely not an array, doing this only to get the correct offsets
    GObjProcess *priority_prev;
    s32 priority;
    u8 kind;
    ub8 is_paused;
    GObj *parent_gobj;
    union // These are based on 0x14
    {
        GObjThread *gobjthread; // GObjThread
        void(*proc_thread)(GObj*);
    };
    void (*proc_common)(GObj*);
};

struct GObjLink
{
    GObj *next;
    s32 unk_gobjlink_0x4;
};

struct GObj
{
    GObjKind gobj_id;
    GObj *link_next;
    GObj *link_prev;
    u8 link_id;
    u8 dl_link_id;
    u8 frame_draw_last;                         // Last frame drawn?
    u8 obj_kind;                        // Determines kind of *obj: 0 = NULL, 1 = DObj, 2 = SObj, 3 = Camera
    u32 link_order;
    void (*func_run)(GObj*);
    GObjProcess *gobjproc_head;

    union
    {
        s32 unk_0x1C;
        GObj *unk_gobj_0x1C;
        GObjProcess *gobjproc_tail;
    };
    
    GObj *dl_link_next;
    GObj *dl_link_prev;
    u32 dl_link_order;
    void (*func_display)(GObj*);
    u64 cam_mask;
    u32 cam_tag;                        // 0xFFFFFFFF, textures or series of flags?
    u64 unk_gobj_0x40;
    GObjLink gobjlinks[5];
    s32 gobjlinks_num;                  // Length/number of active members of gobjlinks
    void *obj;                          // Can be: NULL, DObj, SObj or Camera
    f32 anim_frame;                     // Current frame of animation?
    u32 flags;                          // GObj logic flags (e.g. 0x1 = skip rendering)
    void(*proc_anim)(DObj*, s32, f32);  // DObj animation renderer?
    GCUserData user_data;
};

struct GCMatrix 
{
    GCMatrix *next;
    u8 kind;
    u8 unk05;
    Mtx mtx;
};

struct GCPersp
{
    GCMatrix *gcmatrix;
    u16 norm;
    f32 fovy;
    f32 aspect;
    f32 near;
    f32 far;
    f32 scale;
};

struct GCFrustum
{
    GCMatrix *gcmatrix;
    f32 l, r, b, t, n, f;
    f32 scale;
};

struct GCOrtho
{
    GCMatrix *gcmatrix;
    f32 l, r, b, t, n, f;
    f32 scale;
};

struct GCTranslate
{
    GCMatrix *gcmatrix;

    union
    {
        Vec3f f;
        Vec3i i;

    } vec;
};

struct GCRotate
{
    GCMatrix *gcmatrix;

    f32 a;          // Rotation angle

    union
    {
        Vec3f f;

    } vec;
};

struct GCScale
{
    GCMatrix *gcmatrix;
    
    union
    {
        Vec3f f;

    } vec;
};

/// This stores up to 3 `Mtx3Int`/`Mtx3Float`/`Mtx4Float` structures in the VLA data
/// based on the kind id in the `kinds` arrays:
/// Kind 1 - `struct Mtx3Int` or `union Mtx3fi`
/// Kind 2 - `struct Mtx4Float`
/// Kind 3 - `struct Mtx3Float`
struct DObjDynamicStore
{
    /* 0x00 */ u8 kinds[3];
    /* 0x03 */ u8 pad;
    /* 0x04 */ u8 data[1];
}; // size == 4 + VLA

struct MObjSub
{
    u16 pad00;
    u8 fmt;
    u8 siz;
    void **sprites; // should this be a pointer to an array of images (sprite set)?
    u16 unk08;
    u16 unk0A;
    u16 unk0C;
    u16 unk0E;
    s32 unk10; // could be f32??
    f32 unk14;
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    f32 unk24;
    f32 unk28;
    void **palettes;  // palette pointers?
    u16 flags;      // command flags?
    u8 block_fmt;   // texture image format?
    u8 block_siz;
    u16 block_dxt;
    u16 unk36;
    u16 unk38;
    u16 unk3A;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
    u8 pad48[0x4C - 0x48];
    u32 unk4C;
    syColorPack primcolor;
    u8 prim_l;
    u8 prim_m;
    u8 prim_pad[2];
    syColorPack envcolor;
    syColorPack blendcolor;
    syColorPack light1color;
    syColorPack light2color;
    s32 unk68;
    s32 unk6C;
    s32 unk70;
    s32 unk74;
};

struct MObj
{
    MObj *next;
    GObj *parent_gobj;              // Unconfirmed
    MObjSub sub;
    u16 texture_id_current;
    u16 texture_id_next;
    f32 lfrac;
    f32 palette_id;
    u8 filler_0x8C[0x90 - 0x8C];
    AObj *aobj;
    AObjScript matanim_joint;
    f32 anim_wait;                  // Animation frames remaining until next command(s) are parsed
    f32 anim_speed;                 // Animation playback rate / interpolation, multi-purpose?
    f32 anim_frame;                 // Current animation frame, multi-purpose?
	GCUserData user_data;           // Actually just padding?
};

struct DObjTransformTypes
{
    u8 tk1, tk2;
    u8 tk3;
};

struct DObjDesc
{
    s32 index;
    void *display_list;
    Vec3f translate;
    Vec3f rotate;
    Vec3f scale;
};

struct DObjTraDesc
{
    s32 index;
    void *display_list;
    Vec3f translate;
};

struct DObjMultiList
{
    s32 id;
    Gfx *dl1, *dl2;
};

struct DObjDLLink
{
    s32 list_id;
    Gfx *dl;
};

struct DObjDistDL
{
    f32 target_dist;
    Gfx *dl;
};

struct DObjDistDLLink
{
    f32 target_dist;
    DObjDLLink *dl_link;
};

struct GCGfxLink
{
    u8 id;
    Gfx *dls[4];
};

struct DObj
{
    DObj *alloc_free;       // Has to do with memory allocation
    GObj *parent_gobj;
    DObj *sib_next;         // Next sibling? 0x8
    DObj *sib_prev;         // Previous sibling? 0xC
    DObj *child;            // Child? 0x10
    DObj *parent;
    GCTranslate translate;
    GCRotate rotate;
    GCScale scale;

    DObjDynamicStore *dynstore;

    union
    {
        void *display_ptr;
        Gfx *display_list;
        Gfx **dl_array;
        DObjMultiList *multi_list;
        DObjDLLink *dl_link;
        DObjDistDL *dist_dl;
        DObjDistDLLink *dist_dl_link;
    };

    u8 flags;
    ub8 is_anim_root;       // TRUE if this DObj's animation script is at the top of the hierarchy?
    u8 gcmatrix_len;
    GCMatrix *gcmatrix[5];
    AObj *aobj;

    AObjScript anim_joint;
    
    f32 anim_wait;          // Multi-purpose? Usually frames remaining until next anim command, but used as rotation step in Crate/Barrel smash GFX?
    f32 anim_speed;         // Multi-purpose? Fighters use this as animation playback rate / interpolation, but it is used as rotation step in Crate/Barrel smash GFX?
    f32 anim_frame;         // Multi-purpose? Usually current animation frame, but used as rotation step in Crate/Barrel smash GFX?

    MObj *mobj;

    /* 
     * Can be:
     * Other DObj that this DObj is attached to
     * ftParts
     * YakumonoID
     * Color for 1P Game Master Hand defeat fadeout (?)
     */
    GCUserData user_data;
};

struct SObj                    // Sprite object
{
    SObj *alloc_free;           // Has to do with memory allocation
    GObj *parent_gobj;          // GObj that owns this SObj
    SObj *next;                 // Next SObj in linked list
    SObj *prev;                 // Prev SObj in linked list
    Sprite sprite;              // Sprite data
    GCUserData user_data;       // Custom parameters attached to SObj
    Vec2f pos;                  // Position on screen; ghosting effect if out of camera scissor bounds?
    syColorRGBA envcolor;       // Color of outline around / under sprite?
    u8 cmt, cms;                // t-axis and s-axis mirror, no-mirror, wrap and clamp flags
    u8 maskt, masks;            // t-axis and s-axis mask
    u16 lrs, lrt;               // lower right s and t - used for wrap/mirror boundary
};

struct CameraVec
{
    GCMatrix *gcmatrix;
    Vec3f eye; // Either camera terms do not translate very well here or I'm just too incompetent... this rotates about the focus point
    Vec3f at;  // This moves the camera on the XYZ planes
    Vec3f up;
};

struct CameraDesc
{
    Vec3f eye;
    Vec3f at;
    f32 upx;
};

struct Camera
{
    Camera *next;
    GObj *parent_gobj;

    Vp viewport;

    union CameraProjection
    {
        GCPersp persp;
        GCOrtho ortho;
        GCFrustum frustum;

    } projection;

    CameraVec vec;

    s32 gcmatrix_len;
    GCMatrix *gcmatrix[2];

    AObj *aobj;
    AObjScript camanim_joint;

    f32 anim_wait;
    f32 anim_speed;
    f32 anim_frame;

    u32 flags;
    u32 color;

    void(*func_camera)(Camera*, s32);

    s32 unk_camera_0x8C;
};

struct GCSetup 
{
    GObjThread *gobjthreads;
    s32 gobjthreads_num;

    size_t threadstack_size;
    GCThreadStackNode *threadstacks;
    u32 num_stacks;

    s32 unk_omsetup_0x14;

    GObjProcess *gobjprocs;
    s32 gobjprocs_num;

    GObj *gobjs;
    s32 gobjs_num;
    size_t gobj_size;

    GCMatrix *gcmatrixes;
    s32 gcmatrixs_num;

    void (*proc_eject)(DObjDynamicStore*);

    AObj *aobjs;
    s32 aobjs_num;

    MObj *mobjs;
    s32 mobjs_num;

    DObj *dobjs;
    s32 dobjs_num;
    size_t dobj_size;

    SObj *sobjs;
    s32 sobjs_num;
    size_t sobj_size;

    Camera *cameras;
    s32 cameras_num;
    size_t camera_size;
};

#endif
