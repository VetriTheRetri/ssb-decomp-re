#ifndef _EFDEF_H_
#define _EFDEF_H_

typedef enum efKind
{
	Ef_Kind_DamageNormal,			  // Texture displayed when hit by an attack of the
									  // normal element
	Ef_Kind_FlameLR = 6,			  // Flame whose velocity depends on the user's facing direction
	Ef_Kind_FlameRandom,			  // Small flame texture that scatters
	Ef_Kind_FlameStatic,			  // Small flame texture that is stationary?
	Ef_Kind_ShockSmall = 10,		  // Texture displayed when hit by an attack of the
									  // electric element; small shockwave texture
	Ef_Kind_DustLight,				  // e.g. Light landing (no fast fall)
	Ef_Kind_DustLightRapid,			  // Faster version of DustLight?
	Ef_Kind_DustHeavyDouble,		  // Two instances of heavy dust clouds
	Ef_Kind_DustHeavyDoubleRapid,	  // Two instances of faster heavy dust clouds?
	Ef_Kind_DustHeavy,				  // Single instance of heavy dust cloud
	Ef_Kind_DustHeavyReverse,		  // Single instance of direction-flipped heavy
									  // dust cloud
	Ef_Kind_DustExpandLarge,		  // Large dust cloud that grows in size
	Ef_Kind_DustExpandSmall,		  // Small dust cloud that grows in size
	Ef_Kind_DustDashSmall,			  // Small (actually pretty large) dust kickup behind
									  // user
	Ef_Kind_DustDashLarge,			  // Large dust kickup behind user
	Ef_Kind_DamageFlyOrbs,			  // Cyan orbs that fly outward
	Ef_Kind_ImpactSW,				  // Green impact shockwave that is created when a
									  // character slams into collision
	Ef_Kind_StarRodSpark,			  // Star Rod / Star projectile sparkles
	Ef_Kind_DamageFlySparks,		  // Shows sometimes when getting hit
	Ef_Kind_DamageFlySparksReverse,	  // LR-inverted version
	Ef_Kind_DamageFlyMDust,			  // Metal dust effect, shows sometimes when getting
									  // hit
	Ef_Kind_DamageFlyMDustReverse,	  // LR-inverted version
	Ef_Kind_SparkleWhite,			  // Plays when a flame (Fire Flower, Charizard,
									  // Charmander) or when Pikachu's Thunder hits the
									  // ground
	Ef_Kind_SparkleWhiteMultiExplode, // e.g. Kirby's F-Throw explosion
	Ef_Kind_SparkleWhiteMulti,		  // I can't really trigger this but it's just
									  // SparkleWhiteMultiExplode without the
									  // explosion; seems to be exclusive to fighter
									  // scripts
	Ef_Kind_SparkleWhiteScale,		  // Most common white sparkle, plays during many
									  // moves such as Smash attacks
	Ef_Kind_QuakeM0,				  // Creates an earthquake of magnitude 0
	Ef_Kind_QuakeM1,				  // Creates an earthquake of magnitude 1
	Ef_Kind_QuakeM2,				  // Creates an earthquake of magnitude 2
	Ef_Kind_FireSpark = 37,			  // Not sure who uses this
	Ef_Kind_FuraSparkle = 40,		  // Dizzy sparkles after shield break
	Ef_Kind_Psionic,				  // Ness PSI sparkles
	Ef_Kind_FlashSmall,				  // Expanding green circle, plays when teching
	Ef_Kind_FlashMiddle,			  // Other expanding green circle, plays when grabbing
									  // ledge
	Ef_Kind_FlashLarge,				  // Large expanding green circle, plays when grabbing
									  // Star Man?
	Ef_Kind_BoxSmash = 46,			  // Crate / Barrel smash effect
	Ef_Kind_CrashTheGame,			  // Literally crashes the game; this takes an argument
									  // which acts as a timer; must be extra specific,
									  // during a certain scene
	Ef_Kind_KirbyStar = 54,			  // Can be created manually but this plays when
									  // Kirby makes impact with stage collision
	Ef_Kind_ThunderHit = 70,		  // Pikachu's Thunder self-hit
	Ef_Kind_Ripple,					  // Pikachu's Quick-Attack, Ness's PSI Magnet, Mew spawn, etc.
	Ef_Kind_ChargeSparkle = 73,		  // Fully charged Neutral Special, e.g. DK or Samus
	Ef_Kind_HealSparkles,			  // Used for Heart, Maxim Tomato and Star Man
	Ef_Kind_YoshiEggRoll = 87,
	Ef_Kind_SingNote = 90,
	Ef_Kind_EggBreak

} efKind;

typedef struct efStruct efStruct;
typedef struct efTransform efTransform; // This is Temp001 in halsprite.c
typedef struct efParticle efParticle;	// This is Temp002 in halsprite.c
typedef struct efGenerator efGenerator; // This is Temp003 in halsprite.c
typedef struct efCreateDesc efCreateDesc;

#endif
