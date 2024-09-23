#ifndef _LBTYPES_H_
#define _LBTYPES_H_

#include <ssb_types.h>
#include <sys/obj.h>
#include <gm/generic.h>

#include <lb/lbdef.h>

struct lbFileNode
{
    u32 id;
    void *addr;
};

union lbRelocDesc
{
    struct lbRelocInfo
    {
        u16 reloc;
        u16 words_num;

    } info;

    void *p;   
};

struct lbRelocSetup
{
    uintptr_t table_addr;        // ROM address
    u32 table_files_num;         // Total number of files in table?
    void *file_heap;         
    size_t file_heap_size;
    lbFileNode *status_buf;
    size_t status_buf_size;
    lbFileNode *force_buf;
    size_t force_buf_size;
};

struct lbTableEntry
{
    u32 data_offset;
    u16 reloc_intern_offset; // in words
    u16 compressed_size;      // in words
    u16 reloc_extern_offset; // in words
    u16 decompressed_size;    // in words
};

struct lbInternBuf
{
    uintptr_t rom_table_lo; // Start of file table
    u32 total_files_num;
    uintptr_t rom_table_hi; // End of file table
    void *heap_start;
    void *heap_ptr;
    void *heap_end;

    // "status buffer"
    s32 status_buf_num;
    s32 status_buf_max;
    lbFileNode *status_buf;

    // "force status buffer"
    s32 force_buf_num;
    s32 force_buf_max;
    lbFileNode *force_buf;
};

struct lbScriptDesc
{
    s32 scripts_num;        // Number of scripts in array?
    lbScript *scripts[1];   // Dynamic array
};

struct lbScript
{
    u16 kind;               // Generator kind
	u16 texture_id;         // Texture ID?
    u16 generator_lifetime; // Total frames?
    u16 particle_lifetime;  // Particle lifetime?
    u32 flags;              // Flags?
	f32 gravity;
    f32 friction;
    Vec3f vel;
    f32 unk_script_0x20;
    f32 unk_script_0x24;
    f32 unk_script_0x28;
    f32 mscale;
    u8 bytecode[1];         // Particle bytecode
};

struct lbTextureDesc
{
    s32 textures_num;
    lbTexture *textures[1];
};

struct lbTexture
{
    u32 count;
    s32 fmt;
    s32 siz;
    s32 width, height;
    u32 flags;
    void *data[1];        // Offsets to image, then palette data
};

struct lbGenerator
{
    lbGenerator *next;
	u16 generator_id;
	u16 flags;
	u8 kind;
    u8 bank_id;
    u16 texture_id;
    u16 particle_lifetime;
	u16 generator_lifetime;
	u8 *bytecode;
    Vec3f pos;
    Vec3f vel;
    f32 gravity;
    f32 friction;
    f32 mscale;
    f32 unk_gtor_0x38;
    f32 unk_gtor_0x3C;
    f32 unk_gtor_0x40;
    f32 unk_gtor_0x44;
    DObj *dobj;
    lbTransform *tfrm;

    union lbGeneratorVars
    {
        struct lbGeneratorRotate
        {
            f32 base, target;

        } rotate;

        Vec3f move;

        struct lbGeneratorUnkVars
        {
            f32 f;
            u16 halfword;

        } unk_gtor_vars;

    } generator_vars;
};

struct lbTransform
{
    lbTransform *next;
    Vec3f translate;
    Vec3f rotate;
    Vec3f scale;
    u8 transform_status;        // 0 = ???, 1 = prepare matrix for transformation, 2 = finished transformation
    u8 transform_id;
    u16 users_num;              // Number of other structs using this particular lbTransform struct?
    Mtx44f affine;              // Translate + rotate + scale matrix
    Mtx44f projection;          // Projection matrix
    f32 pc0_magnitude;          // Projection matrix column 0 magnitude
    f32 pc1_magnitude;          // Projection matrix column 1 magnitude
    void (*proc_dead)(lbTransform*);
    u16 generator_id;
    GObj *effect_gobj;
};

struct lbParticle
{
    lbParticle *next;
    u16 generator_id;
    u16 flags;                  // Flags?
    u8 bank_id;
    u8 loop_count;              // Loop count or bank id!?
    u8 texture_id;
    u8 data_id;
    ub16 bytecode_timer;        // Wait timer before next bytecode event is parsed
    u16 unk_ptcl_0xE;
    u16 blend_primcolor_length;
    u16 blend_envcolor_length;
    u8 *bytecode;               // Bytecode base
    u16 bytecode_csr;           // Bytecode cursor
    u16 return_ptr;             // Return to bytecode start + return_ptr on command
    u16 loop_ptr;               // Loop from bytecode start + loop_ptr
    u16 lifetime;               // Particle's duration; ends at 1, not 0, for some reason
    Vec3f pos;                  // Position
    Vec3f vel;                  // Velocity
    f32 gravity;                // Gravity?
    f32 friction;               // Friction?
    f32 mscale;                 // Scales lbTransform affine matrix magnitude?
    f32 unk_ptcl_0x44;
    syColorRGBA primcolor;
    syColorRGBA blend_primcolor;
    syColorRGBA envcolor;
    syColorRGBA blend_envcolor;
    lbGenerator *gtor;
    lbTransform *tfrm;
};

struct lbTransitionDesc
{
    u32 file_id;
    intptr_t o_dobjdesc;
    intptr_t o_anim_joint;
    s32 unk_lbtransition_0xC;
};

struct lbBackupBattleRecord
{
	/* 0x00 */ u16 ko_count[GMCOMMON_FIGHTERS_PLAYABLE_NUM];
	/* 0x18 */ u32 time_used; //< in seconds
	/* 0x1C */ u32 damage_dealt;
	/* 0x20 */ u32 damage_taken;
	/* 0x24 */ u16 unk;
	/* 0x26 */ u16 self_destructs;
	/* 0x28 */ u16 games_played;
	/* 0x2A */ u16 player_count_tally;
	/* 0x2C */ u16 player_count_tallies[GMCOMMON_FIGHTERS_PLAYABLE_NUM];
	/* 0x44 */ u16 played_against[GMCOMMON_FIGHTERS_PLAYABLE_NUM];
};

struct lbBackup1PRecord
{
	u32 spgame_hiscore;
	u32 spgame_continues;
	u32 spgame_bonuses;
	u8 spgame_best_difficulty;
	u32 bonus1_time;	        // Break the Targets high score
	u8 bonus1_task_count;       // Targets broken
	u32 bonus2_time;	        // Board the Platforms high score
	u8 bonus2_task_count;       // Platforms boarded
	u8 spgame_complete;	        // Whether character has completed 1P Game or not
};

// is this the saved data structure?
struct lbBackupData
{
	lbBackupBattleRecord vs_records[GMCOMMON_FIGHTERS_PLAYABLE_NUM];
	ub8 is_allow_screenflash; 	// Toggle for enabling white screen flash when,
							  	// for example, a character takes too much
							  	// damage. Leftover from unused "background
							  	// flash" option? It is always toggled ON, even
							  	// after clearing the save data.
	ub8 sound_mono_or_stereo; 
	s16 screen_adjust_hz;		// Offset from screen center horizontally
	s16 screen_adjust_vt;		// Offset from screen center vertically
	u8 bio_ft_kind;				// Last character viewed on Character Data menu
	u8 unlock_mask;
	u16 character_mask; 		// Mask of unlocked characters?
	u8 spgame_difficulty;
	u8 spgame_stock_count;
	lbBackup1PRecord spgame_records[GMCOMMON_FIGHTERS_PLAYABLE_NUM];
	u16 unlock_task_inishie;   	// Records mask of unique stages played in VS mode
	u8 unlock_task_itemswitch; 	// Records number of VS games played for Item Switch unlock
	u16 vs_total_battles;		// Total amount of VS games played?
	u8 error_flags;		   		// Some kind of anti-piracy/anti-tempering measure??? 
                                // 0x1 results in random knockback velocity, 0x2 halves stick range, 
                                // 0x4 forces Mario in 1P game, 0x8 forces Peach's Castle
	u8 unk5E3;
	u16 unk5E4;
	u8 unk5E6;
	u8 unk5E7;
	s32 checksum; 				// Checksum of save data
};

#endif
