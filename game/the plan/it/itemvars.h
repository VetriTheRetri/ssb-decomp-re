#ifndef _ITEMVARS_H_
#define _ITEMVARS_H_

#include <ssb_types.h>
#include <PR/ultratypes.h>
#include <sys/obj.h>

#define ITCAPSULE_GRAVITY 1.2F
#define ITCAPSULE_T_VEL 100.0F
#define ITCAPSULE_EXPLODE_SCALE 1.4F                    // Size of explosion graphics
#define ITCAPSULE_EXPLODE_FRAME_END 6

#define ITTOMATO_DAMAGE_HEAL 100
#define ITTOMATO_GRAVITY 1.2F
#define ITTOMATO_T_VEL 100.0F

#define ITHEART_DAMAGE_HEAL 999
#define ITHEART_GRAVITY 0.25F
#define ITHEART_T_VEL 30.0F

#define ITSTAR_COLANIM_ID 0x4A
#define ITSTAR_COLANIM_LENGTH 0
#define ITSTAR_BGM_ID 0x2D
#define ITSTAR_BGM_DURATION 10
#define ITSTAR_INVINCIBLE_TIME 600
#define ITSTAR_WARN_BEGIN_FRAME (ITSTAR_INVINCIBLE_TIME - 480)
#define ITSTAR_INTERACT_DELAY 16                        // Wait this many frames before becoming tangible
#define ITSTAR_GRAVITY 1.2F
#define ITSTAR_T_VEL 100.0F
#define ITSTAR_VEL_X 8.0F
#define ITSTAR_BOUNCE_Y 50.0F                           // Y-velocity added when Star Man touches the ground

#define ITSWORD_GRAVITY 1.2F
#define ITSWORD_T_VEL 100.0F

#define ITBAT_GRAVITY 1.5F
#define ITBAT_T_VEL 120.0F

#define ITHARISEN_GRAVITY 1.0F
#define ITHARISEN_T_VEL 80.0F

#define ITLGUN_AMMO_MAX 16
#define ITLGUN_GRAVITY 1.5F
#define ITLGUN_T_VEL 130.0F
#define ITLGUN_AMMO_VEL_X 300.0F
#define ITLGUN_AMMO_STEP_SCALE_X 10.0F
#define ITLGUN_AMMO_CLAMP_SCALE_X 53.333332F

#define ITFFLOWER_AMMO_MAX 60
#define ITFFLOWER_AMMO_LIFETIME 30
#define ITFFLOWER_AMMO_VEL 30.0F
#define ITFFLOWER_GRAVITY 1.2F
#define ITFFLOWER_T_VEL 100.0F
    
#define ITHAMMER_TIME 720
#define ITHAMMER_BGM_ID 0x2E
#define ITHAMMER_BGM_DURATION 20
#define ITHAMMER_WEAR_COLANIM_ID 0x4E                       // Color animation applied to hammer when time is almost up
#define ITHAMMER_WEAR_COLANIM_LENGTH 0
#define ITHAMMER_WARN_BEGIN_FRAME (ITHAMMER_TIME - 600)
#define ITHAMMER_GRAVITY 1.5F
#define ITHAMMER_T_VEL 120.0F

#define ITMSBOMB_EXPLODE_LIFETIME 16
#define ITMSBOMB_DETECT_FIGHTER_DELAY 100
#define ITMSBOMB_DETECT_FIGHTER_RADIUS SQUARE(400.0F)       // Radius is actually 400 units, but it is not sqrt'd in the detection function, so it ends up checking 160000.0F
#define ITMSBOMB_GRAVITY 1.5F
#define ITMSBOMB_T_VEL 80.0F
#define ITMSBOMB_COLL_SIZE 30.0F                            // Size of Motion Sensor Bomb collision box
#define ITMSBOMB_EXPLODE_SCALE 1.2F                         // Size of explosion graphics

#define ITBOMBHEI_EXPLODE_COLANIM_ID 0x4D
#define ITBOMBHEI_EXPLODE_COLANIM_DURATION 90
#define ITBOMBHEI_EXPLODE_LIFETIME 6
#define ITBOMBHEI_WALK_WAIT 180                             // Number of frames required to pass for Bob-Omb to begin walking
#define ITBOMBHEI_FLASH_WAIT 480                            // Number of frames required to pass for Bob-Omb to begin flashing
#define ITBOMBHEI_SMOKE_WAIT 4                              // Delay between smoke GFX?
#define ITBOMBHEI_EXPLODE_WAIT 90.0F                        // Number of frames required to pass for Bob-Omb to explode after flashing? Also a float for some reason
#define ITBOMBHEI_WALK_VEL_X 24.0F
#define ITBOMBHEI_GRAVITY 1.2F
#define ITBOMBHEI_T_VEL 100.0F
#define ITBOMBHEI_EXPLODE_SCALE 1.4F

#define ITSTARROD_AMMO_MAX 20
#define ITSTARROD_GRAVITY 1.2F
#define ITSTARROD_T_VEL 100.0F
#define ITSTARROD_AMMO_SMASH_VEL_X 120.0F
#define ITSTARROD_AMMO_TILT_VEL_X 80.0F
#define ITSTARROD_AMMO_SMASH_LIFETIME 30.0F
#define ITSTARROD_AMMO_TILT_LIFETIME 30.0F

#define ITGSHELL_LIFETIME 240
#define ITGSHELL_HEALTH_MAX 4                               // Set every time shell hits a target
#define ITGSHELL_GFX_SPAWN_INT 8                            // Interval between dust GFX
#define ITGSHELL_DAMAGE_ALL_WAIT 32                         // Wait this many frames before shell can damage its owner and teammates
#define ITGSHELL_CLAMP_VEL_X 90.0F                          // Limit maximum X-velocity to this value
#define ITGSHELL_REBOUND_MUL_X 0.125F                       // Multiplies negated X-velocity; actually division, but optimized into multiplication if possible
#define ITGSHELL_REBOUND_VEL_Y 38.0F                        // Y-velocity gained when recoiling from hitting a target
#define ITGSHELL_STOP_VEL_X 12.0F                           // Halt all horizontal velocity if less than this value
#define ITGSHELL_DAMAGE_MUL_NORMAL 8.0F                     // Multiplies damage taken and turns it into horizontal velocity; run when Shell is hit out of its "wait" state
#define ITGSHELL_DAMAGE_MUL_ADD 3.0F                        // Multiplies damage taken and adds it to horizontal velocity; run whe Shell is hit out of its "slide" state
#define ITGSHELL_GRAVITY 1.2F
#define ITGSHELL_T_VEL 100.0F

#define ITCONTAINER_GFX_COUNT 7                             // Number of pieces Barrel and Crate containers burst into when smashed open
#define ITCONTAINER_GFX_LIFETIME 90                         // Smashed container pieces despawn once this runs out

#define ITBOX_HEALTH_MAX 15                                 // Maximum damage box can resist before breaking
#define ITBOX_EXPLODE_SCALE 1.4F                            // Size of explosion graphics
#define ITBOX_GRAVITY 4.0F
#define ITBOX_T_VEL 120.0F

#define ITTARU_LIFETIME 360
#define ITTARU_EXPLODE_LIFETIME 8
#define ITTARU_DESPAWN_FLASH_START 60                       // Begin flashing when below this value
#define ITTARU_HEALTH_MAX 10
#define ITTARU_MUL_VEL_X 1.4F
#define ITTARU_MIN_VEL_XY 0.1F                              // Decrement lifetime if Barrel's XY velocity is less than this value
#define ITTARU_ROLL_ROTATE_MUL 0.0045F                      // Multiplies rotation of barrel
#define ITTARU_EXPLODE_SCALE 1.4F                           // Size of explosion graphics
#define ITTARU_GRAVITY 4.0F
#define ITTARU_T_VEL 90.0F

#define ITRSHELL_INTERACT_MAX 24
#define ITRSHELL_LIFETIME 480
#define ITRSHELL_HEALTH_MAX 4
#define ITRSHELL_GFX_SPAWN_INT 8
#define ITRSHELL_DAMAGE_ALL_WAIT 16
#define ITRSHELL_CLAMP_VEL_X 70.0F
#define ITRSHELL_CLAMP_AIR_X 90.0F                          // Leftover from Green Shell? This is checked only when the ground beneath the Red Shell collapses
#define ITRSHELL_HIT_INIT_VEL_X 8.0F                        // Initialize hitbox if it is currently inactive and velocity is less than this value
#define ITRSHELL_MUL_VEL_X 1.2F
#define ITRSHELL_STOP_VEL_X 8.0F                            // Halt all horizontal velocity if less than this value OR disable hitbox
#define ITRSHELL_ADD_VEL_X 60.0F                            // Added when Red Shell is reflected
#define ITRSHELL_RECOIL_VEL_X (-8.0F)                       // Applied when shell is attacked
#define ITRSHELL_RECOIL_MUL_X 0.7F                          // Multiplies recoil velocity
#define ITRSHELL_DAMAGE_MUL_NORMAL 10.0F                    // Multiplies damage taken and turns it into horizontal velocity; run when Shell is hit out of its "wait" state
#define ITRSHELL_GRAVITY 1.2F
#define ITRSHELL_T_VEL 100.0F

#define ITBUMPER_CASTLE_KNOCKBACK 300                       // Weight-Dependent Set Knockback of Bumper on Peach's Castle
#define ITBUMPER_CASTLE_ANGLE 361                           // Knockback angle of Bumper on Peach's Castle
#define ITBUMPER_LIFETIME 360
#define ITBUMPER_DESPAWN_TIMER 60                           // Bumper's lifetime is reset to this value; there is no hitbox during this state, and it vanishes for good once it runs out
#define ITBUMPER_RESET_VEL_TIMER 4                          // Bumper's X-velocity is reset to 0.0 when it_multi is less than this value
#define ITBUMPER_DAMAGE_ALL_WAIT 16     
#define ITBUMPER_HIT_SCALE 10                               // Initial of bumper when hitting a target while airborne
#define ITBUMPER_HIT_ANIM_LENGTH 3                          // Number of frames bumper's airborne hit texture lasts 
#define ITBUMPER_COLL_SIZE 120.0F           
#define ITBUMPER_REBOUND_VEL_X (-100.0F)                    // Applied when bumper hits a target while grounded 
#define ITBUMPER_REBOUND_AIR_X (-400.0F)                    // Applied when bumper hits a target while airborne
#define ITBUMPER_REBOUND_AIR_Y 200.0F                       // Applied when bumper hits a target while airborne
#define ITBUMPER_GRAVITY_NORMAL 1.4F
#define ITBUMPER_GRAVITY_HIT 4.0F
#define ITBUMPER_T_VEL 80.0F

#define ITGRLUCKY_EGG_SPAWN_COUNT 1                          // Wait this many frames before spawning egg (read only when egg spawn function is called)
#define ITGRLUCKY_EGG_SPAWN_OFF_X 200.0F                    // X-offset of egg spawn
#define ITGRLUCKY_EGG_SPAWN_OFF_Y 200.0F                    // Y-offset of egg spawn
#define ITGRLUCKY_EGG_SPAWN_MUL 8.0F                        // Multiplies random velocity of egg
#define ITGRLUCKY_EGG_SPAWN_ADD_X 8.0F                      // Added to mutliplied random velocity of egg
#define ITGRLUCKY_EGG_SPAWN_ADD_Y 30.0F                     // Added to multiplide random velocity of egg
#define ITGRLUCKY_EGG_SPAWN_BEGIN 80.0F                     // First frame egg spawn function is called
#define ITGRLUCKY_EGG_SPAWN_END 85.0F                       // Last frame egg spawn function is called
#define ITGRLUCKY_HIT_ROTATE_Z 0.10471976F                  // Rotation step when Chansey is knocked out of the Pokémon hut? Not actually applied?
#define ITGRLUCKY_GRAVITY 1.2F
#define ITGRLUCKY_NDAMAGE_KNOCKBACK_MIN 100.0F
#define ITGRLUCKY_T_VEL 100.0F

#define ITMBALL_SPAWN_WAIT 30                               // Wait this many frames before releasing Pokémon once thrown and landed
#define ITMBALL_GRAVITY 1.5F 
#define ITMBALL_T_VEL 120.0F

#define ITMONSTER_RISE_STOP_WAIT 22                         // Universal attribute for Pokémon to stop slowly levitating upward and to use designated physics this many frames after spawning
#define ITMONSTER_RISE_VEL_Y 16.0F                          // Y-velocity of "levitate" effect after exiting Poké Ball

#define ITPAKKUN_APPEAR_WAIT 180                            // Duration Pirahna Plant waits before coming out of its pipe
#define ITPAKKUN_REBIRTH_WAIT 1200                          // Duration Pirahna Plant waits before respawning after being knocked out and hitting one of the blast zones
#define ITPAKKUN_APPEAR_OFF_Y 245.0F      
#define ITPAKKUN_CLAMP_OFF_Y 360.0F      
#define ITPAKKUN_HURT_SIZE_MUL_Y 0.5F   
#define ITPAKKUN_DETECT_SIZE_WIDTH 600.0F                   // Width of Pirahna Plant fighter detection box when checking to stay inside the pipe
#define ITPAKKUN_DETECT_SIZE_BOTTOM (-300.0F)               // Bottom of Pirahna Plant fighter detection box when checking to stay inside the pipe
#define ITPAKKUN_DETECT_SIZE_TOP 700.0F                     // Top of Pirahna Plant fighter detection box when checking to stay inside the pipe
#define ITPAKKUN_NDAMAGE_KNOCKBACK_MIN 100.0F
#define ITPAKKUN_GRAVITY 1.5F
#define ITPAKKUN_T_VEL 120.0F

#define ITIWARK_FLY_WAIT 30                                 // Unconfirmed?
#define ITIWARK_MODEL_ROTATE_WAIT 6                         // Onix's sprite is flipped every time this timer is up; counts up, reset to 0 when reaching destination value
#define ITIWARK_ROCK_RUMBLE_WAIT 18                         // Frames to wait between screen shake effects
#define ITIWARK_ROCK_SPAWN_COUNT_MAX 9                      // Maximum number of rocks that can be spawned
#define ITIWARK_ROCK_SPAWN_COUNT_MIN 8                      // Added to number of rocks that can be spawned
#define ITIWARK_ROCK_SPAWN_WAIT_MAX 30                      // Maximum random delay between spawned rocks
#define ITIWARK_ROCK_SPAWN_WAIT_MIN 15                      // Added to random delay between spawned rocks
#define ITIWARK_ROCK_SPAWN_OFF_X_MUL 2000.0F                // Multiplies random spawn position of rock projectile
#define ITIWARK_ROCK_SPAWN_OFF_X_ADD (-1000.0F)             // Added to random spawn position of rock projectile
#define ITIWARK_FLY_VEL_Y 80.0F                             // Y-velocity of Onix when flying up
#define ITIWARK_FLY_STOP_Y 200.0F                           // Stop this many units away from the upper blast zone
#define ITIWARK_IWARK_ADD_POS_Y (-660.0F)                   // Add this to Y-position if user is Onix
#define ITIWARK_OTHER_ADD_POS_Y (-100.0F)                   // Add this to Y-position if user is not Onix

#define WPIWARK_ROCK_RANDOM_VEL_MAX 3                       // Maximum number of random initial Y-velocities possible
#define WPIWARK_ROCK_GRAVITY 2.0F                           // Gravity of rock projectile
#define WPIWARK_ROCK_T_VEL 200.0F                           // Terminal velocity of rock projectile
#define WPIWARK_ROCK_ROTATE_STEP (-0.5F)                    // Z-rotation step of rock projectile
#define WPIWARK_ROCK_VEL_Y_START_A (-100.0F)                // One of three random initial Y-velocities possible
#define WPIWARK_ROCK_VEL_Y_START_B (-50.0F)                 // One of three random initial Y-velocities possible
#define WPIWARK_ROCK_VEL_Y_START_C 0.0F                     // One of three random initial Y-velocities possible
#define WPIWARK_ROCK_COLLIDE_MUL_VEL_Y 0.1F                 // Assume this is what slows the rocks down so much when they hit the ground
#define WPIWARK_ROCK_COLLIDE_ADD_VEL_Y (-150.0F)            // Added when rock collides with ground

#define ITKABIGON_GFX_SPAWN_INT 4
#define ITKABIGON_DROP_WAIT 60                              // Wait this many frames before dropping after reaching the top of the screen
#define ITKABIGON_RUMBLE_WAIT 18                            // Wait this many frames between screen shake effects
#define ITKABIGON_DROP_VEL_Y (-220.0F)                      // Velocity of downward drop
#define ITKABIGON_DROP_OFF_X_MUL 2000.0F                    // Multiplies random drop X-position
#define ITKABIGON_DROP_OFF_X_ADD (-1000.0F)                 // Added to multiplied random drop X-position
#define ITKABIGON_DROP_SIZE_KABIGON 4.0F                    // Size of Snorlax's drop model and hitbox
#define ITKABIGON_DROP_SIZE_OTHER 5.2F                      // Size of non-Snorlax drop model and hitbox (Clefairy)
#define ITKABIGON_JUMP_VEL_Y 80.0F                          // Y-velocity of Snorlax's jump
#define ITKABIGON_JUMP_GFX_MUL_OFF 200.0F                   // Multiplies random spawn position of dust GFX when Snorlax jumps
#define ITKABIGON_JUMP_GFX_SUB_OFF 100.0F                   // Subtracted from random spawn position of dust GFX when Snorlax jumps
#define ITKABIGON_MAP_OFF_Y 200.0F                          // Halt jump this many units away from top blastonze / despawn if Y-position is less than bottom blastzone + this value

#define ITTOSAKINTO_LIFETIME 360
#define ITTOSAKINTO_FLAP_VEL_X 10.0F                        // Semi-constant horizontal velocity that may randomly be inverted
#define ITTOSAKINTO_FLAP_VEL_Y 60.0F                        // Vertical velocity gained from touching the ground
#define ITTOSAKINTO_GRAVITY 6.0F
#define ITTOSAKINTO_T_VEL 90.0F

#define ITMEW_LIFETIME 480
#define ITMEW_GFX_SPAWN_INT 3
#define ITMEW_START_VEL_X 8.0F                              // Mew's initial X-velocity
#define ITMEW_START_VEL_Y -20.0F                            // Mew's initial Y-velocity
#define ITMEW_FLY_ADD_VEL_Y 0.8F                            // Added to Mew's Y-velocity every frame

#define ITNYARS_LIFETIME 240
#define ITNYARS_MODEL_ROTATE_WAIT 30                        // Flip Meowth's model every time this timer runs out; reset at 0
#define ITNYARS_COIN_SPAWN_MAX 4                            // Spawn this many coins simultaneously
#define ITNYARS_COIN_LIFETIME 10
#define ITNYARS_COIN_SPAWN_WAIT 8                           // Spawn a new set of coins at this frequency (frames)
#define ITNYARS_COIN_ANGLE_STEP 13.0F                       // Multiplies coin rotation step, actually angle in degrees
#define ITNYARS_COIN_ANGLE_DIFF 90.0F                       // Angle difference between each simultaneously spawned coin
#define ITNYARS_COIN_VEL_X 130.0F

#define ITLIZARDON_LIFETIME 480
#define ITLIZARDON_FLAME_LIFETIME 30
#define ITLIZARDON_FLAME_SPAWN_WAIT 8                       // Wait this many frames before spawning another flame projectile
#define ITLIZARDON_TURN_WAIT 26                             // Wait this many frames before flipping Charizard's sprite
#define ITLIZARDON_FLAME_SPAWN_ANGLE F_DEG_TO_RAD(-15.0F)   // Angle at which flame projectile spreads (-0.2617994F)
#define ITLIZARDON_FLAME_VEL_XY 50.0F       
#define ITLIZARDON_LIZARDON_FLAME_OFF_X 180.0F          // X-offset of Charizard's flame spawn position
#define ITLIZARDON_LIZARDON_FLAME_OFF_Y 120.0F          // Y-offset of Charizard's flame spawn position
#define ITLIZARDON_OTHER_FLAME_OFF_X 100.0F             // X-offset of other flame spawn position (Clefairy)
#define ITLIZARDON_DUST_GFX_OFF_X (-400.0F)             // X-offset of dust GFX when turning around
#define ITLIZARDON_GRAVITY 1.0F 
#define ITLIZARDON_T_VEL 40.0F

#define ITSPEAR_SPAWN_COUNT 16                          // Swarm will have this many member Beedrill
#define ITSPEAR_SPAWN_WAIT_CONST 12                     // Minimum number of frames between Beedrill swarm member spawns
#define ITSPEAR_SPAWN_WAIT_RANDOM 9                     // Added to minimum number of frames between Beedrill swarm member spawns
#define ITSPEAR_SPAWN_OFF_Y_MUL 1800.0F                 // Multiplies random vertical spawn position
#define ITSPEAR_SPAWN_OFF_Y_ADD (-800.0F)               // Added to random vertical spawn position
#define ITSPEAR_SWARM_FLY_VEL_X 130.0F                  // X-velocity of Beedrill swarm members
#define ITSPEAR_SWARM_CALL_VEL_X 6.0F                   // Leader Beedrill's X-velocity when flying off to call the swarm, added each frame until called
#define ITSPEAR_SWARM_CALL_VEL_Y 60.0F                  // ???
#define ITSPEAR_SWARM_CALL_OFF_X 500.0F                 // Begin swarm when leader is this many units away from the side blastzone
#define ITSPEAR_SWARM_CALL_WAIT 51.0F                   // Fly off into the distance and call Beedrill swarm on this frame of the leader's wait animation
#define ITSPEAR_GRAVITY 1.0F
#define ITSPEAR_T_VEL 90.0F 

#define ITKAMEX_LIFETIME 360
#define ITKAMEX_HYDRO_LIFETIME 20
#define ITKAMEX_HYDRO_SPAWN_WAIT_CONST 30               // Constant wait frames to spawn Hydro Pump
#define ITKAMEX_HYDRO_SPAWN_WAIT_RANDOM 1               // Maximum random wait frames to spawn Hydro Pump
#define ITKAMEX_KAMEX_HYDRO_SPAWN_OFF_X 360.0F          // X-offset of Blastoise Hydro Pump spawn position
#define ITKAMEX_KAMEX_HYDRO_SPAWN_OFF_Y 100.0F          // Y-offset of Blastoise Hydro Pump spawn position
#define ITKAMEX_OTHER_HYDRO_SPAWN_OFF_X 100.0F          // X-offset of other Hydro Pump spawn position (Clefairy)
#define ITKAMEX_DUST_SPAWN_OFF_X (-150.0F)              // X-offset of dust GFX
#define ITKAMEX_COLL_SIZE 341.0F
#define ITKAMEX_PUSH_VEL_X 2.3F
#define ITKAMEX_CONST_VEL_X 38.0F                       // Constant velocity after Blastoise lands
#define ITKAMEX_GRAVITY 1.0F
#define ITKAMEX_T_VEL 40.0F

#define ITMBLUCKY_LIFETIME 90                           // Used only after Chansey has spawned all of its eggs
#define ITMBLUCKY_EGG_SPAWN_WAIT_ADD 4                  // Added when Chansey gets hit
#define ITMBLUCKY_EGG_SPAWN_COUNT 3 
#define ITMBLUCKY_EGG_SPAWN_WAIT_CONST 30
#define ITMBLUCKY_EGG_SPAWN_BASE_VEL 8.0F               // Multiplies random velocity
#define ITMBLUCKY_EGG_SPAWN_ADD_VEL_X 7.0F              // Added to multiplied random X-velocity
#define ITMBLUCKY_EGG_SPAWN_ADD_VEL_Y 40.0F             // Added to multiplide random Y-velocity
#define ITMBLUCKY_GRAVITY 1.0F
#define ITMBLUCKY_T_VEL 40.0F

#define ITEGG_EXPLODE_GFX_WAIT 8                        // Wait this many frames before spawning eggshell break GFX on explosion
#define ITEGG_EXPLODE_GFX_SCALE 1.4F                    // Scale of explosion GFX
#define ITEGG_GRAVITY 1.2F
#define ITEGG_T_VEL 100.0F

#define ITSTARMIE_LIFETIME 240
#define ITSTARMIE_SWIFT_LIFETIME 30
#define ITSTARMIE_SWIFT_SPAWN_WAIT_CONST 12             // Constant wait frames to spawn Hydro Pump
#define ITSTARMIE_SWIFT_SPAWN_WAIT_RANDOM 1             // Maximum random wait frames to spawn Swift
#define ITSTARMIE_SWIFT_VEL_X 150.0F
#define ITSTARMIE_STARMIE_SWIFT_SPAWN_OFF_X 200.0F      // X-offset of Starmie Swift spawn position
#define ITSTARMIE_STARMIE_SWIFT_SPAWN_OFF_Y 100.0F      // Y-offset of Starmie Swift spawn position
#define ITSTARMIE_OTHER_SWIFT_SPAWN_OFF_X 100.0F        // X-offset of other Swift spawn position (Clefairy)
#define ITSTARMIE_TARGET_POS_OFF_X 400.0F               // Added to Starmie's target travel position + fighter's collision box
#define ITSTARMIE_TARGET_POS_OFF_Y 250.0F               // Added to Starmie's target travel position + fighter's collision box
#define ITSTARMIE_FOLLOW_VEL_X 20.0F                    // X-velocity at which Starmie follows its victim
#define ITSTARMIE_ADD_VEL_X 10.0F
#define ITSTARMIE_PUSH_VEL_X 70.0F                      // Set every time Starmie fires Swift

#define ITSAWAMURA_LIFETIME 600
#define ITSAWAMURA_KICK_WAIT 40
#define ITSAWAMURA_TARGET_POS_OFF_Y 500.0F              // Added to Hitmonlee's target travel position + fighter's collision box
#define ITSAWAMURA_DESPAWN_OFF_X 500.0F                 // Despawn if Hitmonlee is within this many units of the side blastzones
#define ITSAWAMURA_KICK_SIZE 300.0F                     // Size of kick hitbox
#define ITSAWAMURA_KICK_VEL_X 400.0F
#define ITSAWAMURA_GRAVITY 2.4F
#define ITSAWAMURA_T_VEL 100.0F

#define ITDOGAS_DESPAWN_WAIT 90                         // Wait this many frames after running out of gas before despawning
#define ITDOGAS_SMOG_SPAWN_WAIT 8
#define ITDOGAS_SMOG_SPAWN_COUNT 32                     // Spawn this many Smog clouds
#define ITDOGAS_SMOG_LIFETIME 30
#define ITDOGAS_SMOG_VEL_XY 18.0F                  
#define ITDOGAS_SMOG_MUL_OFF_X 400.0F                   // Multiply random spawn position
#define ITDOGAS_SMOG_SUB_OFF_X 200.0F                   // Subtracted from multiplied random spawn position
#define ITDOGAS_SMOG_MUL_OFF_Y 800.0F                   // Multiply random spawn position
#define ATDGOAS_SMOG_SUB_OFF_Y 400.0F                   // Subtracted from multiplied random spawn position

#define ITMARUMINE_EXPLODE_LIFETIME 6
#define ITMARUMINE_EXPLODE_GFX_SCALE 1.4F

#define ITPORYGON_SHAKE_STOP_WAIT 32                    // Stop vertical shake after this many frames have passed?

#define ITHITOKAGE_FLAME_LIFETIME 20
#define ITHITOKAGE_FLAME_SPAWN_WAIT 8
#define ITHITOKAGE_FLAME_SPAWN_ANGLE F_DEG_TO_RAD(-12.0F) // -0.20943952F
#define ITHITOKAGE_FLAME_VEL_BASE 45.0F   
#define ITHITOKAGE_FLAME_SPAWN_BEGIN 40.0F              // Charmander can begin firing Flamethrower this frame onward
#define ITHITOKAGE_FLAME_SPAWN_END 120.0F               // Charmander can no longer fire Flamethrower this frame onward
#define ITHITOKAGE_FLAME_SPAWN_OFF_X (-250.0F)          // X-offset of flame spawn
#define ITHITOKAGE_HIT_ROTATE_Z F_DEG_TO_RAD(6.0F)      // 0.10471976F
#define ITHITOKAGE_NDAMAGE_KNOCKBACK_MIN 100.0F         // Minimum knockback required to send Charmander into damage state
#define ITHITOKAGE_GRAVITY 1.2F
#define ITHITOKAGE_T_VEL 100.0F

#define ITFUSHIGIBANA_RETURN_WAIT 128                   // Wait this many frames before deactivating hitbox?
#define ITFUSHIGIBANA_RAZOR_LIFETIME 24
#define ITFUSHIGIBANA_RAZOR_SPAWN_WAIT 16
#define ITFUSHIGIBANA_RAZOR_VEL_X (-100.0F)
#define ITFUSHIGIBANA_RAZOR_ADD_VEL_X 5.0F              
#define ITFUSHIGIBANA_RAZOR_SPAWN_BEGIN 40.0F           // Venusaur can begin shooting Razor Leaf this frame onward
#define ITFUSHIGIBANA_RAZOR_SPAWN_END 120.0F            // Venusaur can no longer shoot Razor Leaf this frame onward
#define ITFUSHIGIBANA_RAZOR_SPAWN_OFF_X (-540.0F)       // X-offset of leaf spawn

#define ITRBOMB_GFX_COUNT 7                             // Number of pieces RTTF Bomb bursts into when smashed open
#define ITRBOMB_GFX_LIFETIME 90                         // Smashed RTTF Bomb pieces despawn once this runs out

#define ITRBOMB_HEALTH_MAX 10
#define ITRBOMB_EXPLODE_LIFETIME 6
#define ITRBOMB_EXPLODE_GFX_SCALE 1.4F
#define ITRBOMB_MUL_VEL_X 1.4F
#define ITRBOMB_MIN_VEL_XY 0.1F                         // Decrement lifetime if Barrel's XY velocity is less than this value
#define ITRBOMB_ROLL_ROTATE_MUL 0.0045F                 // Multiplies rotation of barrel
#define ITRBOMB_GRAVITY 4.0F
#define ITRBOMB_T_VEL 90.0F

#define ITPKFIRE_LIFETIME 100
#define ITPKFIRE_HURT_DAMAGE_MUL 3                      // Multiplies damage taken, result gets subtracted from lifetime
#define ITPKFIRE_GRAVITY 0.45F
#define ITPKFIRE_T_VEL 55.0F

#define ITLINKBOMB_HEALTH 7
#define ITLINKBOMB_LIFETIME 300
#define ITLINKBOMB_EXPLODE_LIFETIME 6
#define ITLINKBOMB_BLOAT_COLANIM_ID 0x4F                // Apply this color animation when Bomb begins to bloat
#define ITLINKBOMB_BLOAT_COLANIM_LENGTH 96              // Duration of bloat color animation
#define ITLINKBOMB_SCALE_INDEX_MAX 10                   // Maximum number of scale floats in array?
#define ITLINKBOMB_SCALE_INDEX_REWIND 6                 // When index reaches this value, rewind
#define ITLINKBOMB_SCALE_INT 4                          // Interval between Bomb inflate/deflate animation updates; effectively animation speed
#define ITLINKBOMB_DAMAGE_RECOIL_VEL_X 20.0F            // Horizontal knockback taken from hits dealing less than ITLINKBOMB_HEALTH can sustain
#define ITLINKBOMB_DAMAGE_RECOIL_VEL_Y 18.0F            // Vertical knockback taken from hits dealing less than ITLINKBOMB_HEALTH can sustain
#define ITLINKBOMB_EXPLODE_THRESHOLD_VEL_X 36.0F        // If X-velocity is greater than this value when hitting a target, explode
#define ITLINKBOMB_EXPLODE_THRESHOLD_VEL_Y 25.0F        // If Y-velocity is greater than this value when hitting a target, explode
#define ITLINKBOMB_BLOAT_BEGIN 96.0F                    // Bomb begins bloating when lifetime is equal or less than this value
#define ITLINKBOMB_HIT_RECOIL_VEL_X 8.0F                // X-velocity upon hitting a target without exploding
#define ITLINKBOMB_HIT_RECOIL_VEL_Y 20.0F               // Y-velocity upon hitting a target without exploding
#define ITLINKBOMB_EXPLODE_GFX_SCALE 1.3F
#define ITLINKBOMB_GRAVITY 1.2F
#define ITLINKBOMB_T_VEL 100.0F

enum itYCityMonsterFlags
{
    itYCityMonster_Flags_WeaponWait,
    itYCityMonster_Flags_WeaponInstant

} itYCityMonsterFlags;

#define ITYCITYMONSTER_FLAG_NONE        (0)
#define ITYCITYMONSTER_WEAPON_WAIT      (1 << itYCityMonster_Flags_WeaponWait)
#define ITYCITYMONSTER_WEAPON_INSTANT   (1 << itYCityMonster_Flags_WeaponInstant)
#define ITYCITYMONSTER_WEAPON_ALL       (ITYCITYMONSTER_WEAPON_INSTANT | ITYCITYMONSTER_WEAPON_WAIT)

typedef struct itCommon_ItemVars_BombHei
{
    u16 smoke_delay;     // Frames before smoke effect is created when Bob-Omb begins walking?

} itCommon_ItemVars_BombHei;

typedef struct itCommon_ItemVars_Shell
{
    u8 damage_all_delay;     // Shell can hit owner and teammates once this frame timer reaches -1
    u8 dust_gfx_int;     // Delay between dust GFX
    u8 health;     // Appears to determine whether Shell will despawn after hittin a target, shell can have up to 4 HP
    u8 is_damage;     // Shell can damage players
    u8 is_setup_vars;
    u8 interact;     // Decremented each time the shell is attacked, reflected, or it hits something; despawns shell at 0
    f32 vel_x;

} itCommon_ItemVars_Shell;

typedef struct itCommon_ItemVars_Taru
{
    f32 roll_rotate_step;

} itCommon_ItemVars_Taru;

typedef struct itCommon_ItemVars_Bumper
{
    u16 hit_anim_length;     // Number of frames "hit" animation lasts after bouncing off a target in midair
    u16 unk_0x2;
    u16 damage_all_delay;     // Bumper is able to hit its owner (and teammates?) once this timer runs out

} itCommon_ItemVars_Bumper;

typedef struct itGround_ItemVars_GrLucky
{
    Vec3f pos;
    u16 egg_spawn_count;

} itGround_ItemVars_GrLucky;

typedef struct itCommon_ItemVars_MBall
{
    u16 is_rebound;     // Set to TRUE when Poké Ball bounces back off a target
    GObj *owner_gobj;     // While Poké Balls can be reflected, ownership is not transfered to the reflecting player; its original thrower remains its owner
    GObj *effect_gobj;     // Poké Ball ray scatter GFX

} itCommon_ItemVars_MBall;

typedef struct itGround_ItemVars_Pakkun
{
    Vec3f pos;
    u8 is_wait_fighter;     // TRUE if a fighter is occupying the pipe

} itGround_ItemVars_Pakkun;

typedef struct itMonster_ItemVars_Iwark
{
    u16 rock_timer1;
    s32 rock_spawn_wait;     // Delay between rock projectiles
    u16 rock_timer2;
    u16 is_rumble;     // Not really a bool?
    u16 rumble_wait;
    u16 rock_spawn_count;     // Number of rocks to spawn?

} itMonster_ItemVars_Iwark;

typedef struct itMonster_ItemVars_Kabigon
{
    s32 dust_gfx_int;
    s32 rumble_wait;

} itMonster_ItemVars_Kabigon;

typedef struct itMonster_ItemVars_Tosakinto
{
    Vec3f pos;

} itMonster_ItemVars_Tosakinto;

typedef struct itMonster_ItemVars_Mew
{
    s32 esper_gfx_int;

} itMonster_ItemVars_Mew;

typedef struct itMonster_ItemVars_Nyars
{
    u16 coin_spawn_wait;
    u16 coin_rotate_step;
    u16 model_rotate_wait;

} itMonster_ItemVars_Nyars;

typedef struct itMonster_ItemVars_Lizardon
{
    Vec3f pos;
    u16 turn_wait;
    u16 flame_spawn_wait;

} itMonster_ItemVars_Lizardon;

typedef struct itMonster_ItemVars_Spear
{
    u16 spear_spawn_count;
    s32 spear_spawn_wait;
    f32 spear_spawn_pos_y;

} itMonster_ItemVars_Spear;

typedef struct itMonster_ItemVars_Kamex
{
    s32 hydro_spawn_wait;
    f32 hydro_push_vel_x;     // Added to Blastoise's velocity if is_apply_push is TRUE
    bool32 is_apply_push;     // Blastoise will be pushed forward after each Hydro Pump stream if enabled

} itMonster_ItemVars_Kamex;

typedef struct itMonster_ItemVars_MbLucky
{
    u16 egg_spawn_wait;
    u16 lifetime;

} itMonster_ItemVars_MbLucky;

typedef struct itMonster_ItemVars_Starmie
{
    s32 unk_0x0;
    s32 swift_spawn_wait;
    Vec3f target_pos;     // Position Starmie is set to travel when released from its Poké Ball
    Vec3f victim_pos;     // Position of Starmie's selected victim
    f32 add_vel_x;

} itMonster_ItemVars_Starmie;

typedef struct itMonster_ItemVars_Dogas
{
    Vec3f pos;
    s32 smog_spawn_wait;

} itMonster_ItemVars_Dogas;

typedef struct itGround_ItemVars_Marumine
{
    Vec3f offset;

} itGround_ItemVars_Marumine;

typedef struct itGround_ItemVars_Porygon
{
    Vec3f offset;

} itGround_ItemVars_Porygon;

typedef struct itGround_ItemVars_Hitokage
{
    Vec3f offset;
    u16 flags;
    u16 flame_spawn_wait;

} itGround_ItemVars_Hitokage;

typedef struct itGround_ItemVars_Fushigibana
{
    Vec3f offset;
    u16 flags;
    u16 razor_spawn_wait;

} itGround_ItemVars_Fushigibana;

typedef struct itGround_ItemVars_RaceBomb
{
    f32 roll_rotate_step;

} itGround_ItemVars_RaceBomb;

typedef struct itFighter_ItemVars_PKFire
{
    efTransform *effect;

} itFighter_ItemVars_PKFire;

typedef struct itFighter_ItemVars_LinkBomb
{
    u16 unk_0x0;
    u16 drop_update_wait;   // Wait frames when dropping bomb, must pass before ProcUpdate, ProcHit and ProcDamage can be checked?
    u16 scale_index;
    u16 scale_int; // Interval between Bomb inflate/deflate animation updates; effectively animation speed

} itFighter_ItemVars_LinkBomb;

// Thought this might be a macro but it's not consistent

#define ArticleSetMonster(ap) \
    ap->it_multi = 22; \
    ap->phys_info.vel_air.z = 0.0F; \
    ap->phys_info.vel_air.x = 0.0F; \
    ap->phys_info.vel_air.y = 16.0F; \

#endif