#ifndef _GM1PGAME_H_
#define _GM1PGAME_H_

#define GM1PGAME_STAGE_MAX_TEAM_COUNT 30
#define GM1PGAME_STAGE_MAX_VARIATIONS_COUNT 12

#define GM1PGAME_STAGE_YOSHI_VARIATIONS_COUNT 6
#define GM1PGAME_STAGE_YOSHI_TEAM_COUNT 18

#define GM1PGAME_STAGE_KIRBY_VARIATIONS_COUNT 7
#define GM1PGAME_STAGE_KIRBY_TEAM_COUNT	8
#define GM1PGAME_STAGE_KIRBY_SIM_COUNT 2				// Number of opponents fought at once

#define GM1PGAME_STAGE_MAX_OPPONENT_COUNT 3

// First set of bonuses
#define GM1PGAME_BONUS_MASK0_CHEAPSHOT		0x1			// Used one move >= 35% of the time
#define GM1PGAME_BONUS_MASK0_STARFINISH		0x2			// KO'd last enemy with a Star KO or Screen KO
#define GM1PGAME_BONUS_MASK0_NOITEM			0x4			// Did not use any items
#define GM1PGAME_BONUS_MASK0_SHIELDBREAKER	0x8			// Broke enemy's shield
#define GM1PGAME_BONUS_MASK0_JUDOWARRIOR	0x10		// Only used throws
#define GM1PGAME_BONUS_MASK0_HAWK			0x20		// Only used aerials
#define GM1PGAME_BONUS_MASK0_SHOOTER		0x40		// Only used projectiles
#define GM1PGAME_BONUS_MASK0_HEAVYDAMAGE	0x80		// Accumulated over 200% damage
#define GM1PGAME_BONUS_MASK0_ALLVARIATIONS	0x100		// Used all jabs, tilts, attacks and aerials
#define GM1PGAME_BONUS_MASK0_ITEMSTRIKE		0x200		// Only used items
#define GM1PGAME_BONUS_MASK0_DOUBLEKO		0x400		// Unused, translated from Japanese
#define GM1PGAME_BONUS_MASK0_TRICKSTER		0x800		// KO'd every enemy of a team with a Star KO or Screen KO
#define GM1PGAME_BONUS_MASK0_GIANTIMPACT	0x1000		// Unused, translated from Japanese
#define GM1PGAME_BONUS_MASK0_SPEEDSTER		0x2000		// Cleared stage in less than 30 seconds
#define GM1PGAME_BONUS_MASK0_ITEMTHROW		0x4000		// Threw or dropped all items, never used them in any other way
#define GM1PGAME_BONUS_MASK0_TRIPLEKO		0x8000		// Unused, translated from Japanese
#define GM1PGAME_BONUS_MASK0_LASTCHANCE		0x10000		// Unused, translated from Japanese
#define GM1PGAME_BONUS_MASK0_PACIFIST		0x20000		// Cleared stage without dealing any damage
#define GM1PGAME_BONUS_MASK0_PERFECT		0x40000		// Cleared Bonus Stage with all targets broken or all platforms boarded
#define GM1PGAME_BONUS_MASK0_NOMISS			0x80000		// Cleared stage without falling once throughout 1P Game progress; multiplied each time it is earned, lost after first fall
#define GM1PGAME_BONUS_MASK0_NODAMAGE		0x100000	// Cleared stage without falling and taking any damage
#define GM1PGAME_BONUS_MASK0_FULLPOWER		0x200000	// Cleared stage with 0% damage (does not yield No Damage)
#define GM1PGAME_BONUS_MASK0_BOSSCLEAR		0x400000	// Cleared Final Stage (number of bonus points depends on difficulty?)
#define GM1PGAME_BONUS_MASK0_NOMISSCLEAR	0x800000	// Cleared all stages without falling once (except Bonus Stages?)
#define GM1PGAME_BONUS_MASK0_NODAMAGECLEAR	0x1000000	// Cleared all stages without taking any damage
#define GM1PGAME_BONUS_MASK0_SPEEDKING		0x2000000	// Cleared all stages in under 12 minutes (not earned if Speed Demon criteria is met)
#define GM1PGAME_BONUS_MASK0_SPEEDDEMON		0x4000000	// Cleared all stages in under 8 minutes
#define GM1PGAME_BONUS_MASK0_MEWCATCHER		0x8000000	// Mew was released from player's Poké Ball
#define GM1PGAME_BONUS_MASK0_STARCLEAR		0x10000000	// Cleared stage while under the effect of Star Man
#define GM1PGAME_BONUS_MASK0_VEGETARIAN		0x20000000	// Consumed 3 or more Maxim Tomatoes
#define GM1PGAME_BONUS_MASK0_HEARTTHROB		0x40000000	// Consumed 3 or more Hearts
#define GM1PGAME_BONUS_MASK0_THROWDOWN		0x80000000	// KO'd last enemy with a throw

// Second set of bonuses
#define GM1PGAME_BONUS_MASK1_SMASHMANIA		0x1			// Only used Smash Attacks
#define GM1PGAME_BONUS_MASK1_SMASHLESS		0x2			// Never used Smash Attacks
#define GM1PGAME_BONUS_MASK1_SPECIALMOVE	0x4			// Only used Special Attacks
#define GM1PGAME_BONUS_MASK1_SINGLEMOVE		0x8			// Only used the same Special Attack
#define GM1PGAME_BONUS_MASK1_POKEMONFINISH	0x10		// KO'd last enemy with a Pokémon (Saffron City Pokémon projectiles also count, but not the Pokémon themselves?)
#define GM1PGAME_BONUS_MASK1_BOOBYTRAP		0x20		// KO'd last enemy with a Motion Sensor Bomb
#define GM1PGAME_BONUS_MASK1_FIGHTERSTANCE	0x40		// Player was taunting as stage ended
#define GM1PGAME_BONUS_MASK1_MYSTIC			0x80		// Player fell as stage ended
#define GM1PGAME_BONUS_MASK1_SHOOTINGSTAR	0x100		// Player was getting Star KO'd as stage ended (Screen KOs do not count)
#define GM1PGAME_BONUS_MASK1_ACIDCLEAR		0x200		// Last enemy got KO'd by Acid
#define GM1PGAME_BONUS_MASK1_BUMPERCLEAR	0x400		// Last enemy got KO'd by Bumper
#define GM1PGAME_BONUS_MASK1_TORNADOCLEAR	0x800		// Last enemy got KO'd by Tornado
#define GM1PGAME_BONUS_MASK1_ARWINGCLEAR	0x1000		// Last enemy got KO'd by ARWING
#define GM1PGAME_BONUS_MASK1_COUNTERATTACK	0x2000		// Unused, translated from Japanese
#define GM1PGAME_BONUS_MASK1_METEORSMASH	0x4000		// Unused, translated from Japanese
#define GM1PGAME_BONUS_MASK1_AERIAL			0x8000		// Unused, translated from Japanese
#define GM1PGAME_BONUS_MASK1_LASTSECOND		0x10000		// Cleared stage with 1 second left on the timer
#define GM1PGAME_BONUS_MASK1_LUCKY3			0x20000		// Cleared stage with 3:33 left on the timer
#define GM1PGAME_BONUS_MASK1_JACKPOT		0x40000		// Cleared stage with a damage % of two or three identical digits (e.g. 44% or 111%)
#define GM1PGAME_BONUS_MASK1_YOSHIRAINBOW	0x80000		// KO'd every member of Yoshi Team in the order they appeared
#define GM1PGAME_BONUS_MASK1_KIRBYRANKS		0x100000	// KO'd every member of Kirby Team in the order they appeared
#define GM1PGAME_BONUS_MASK1_BROSCALAMITY	0x200000	// KO'd Luigi before damaging Mario on VS Mario Bros. stage
#define GM1PGAME_BONUS_MASK1_DKDEFENDER		0x400000	// Allies did not fall on VS. Giant Donkey Kong stage
#define GM1PGAME_BONUS_MASK1_DKPERFECT		0x800000	// Allies did not fall and took no damage on VS. Giant Donkey Kong stage
#define GM1PGAME_BONUS_MASK1_GOODFRIEND		0x1000000	// Ally did not fall on VS Mario Bros. stage
#define GM1PGAME_BONUS_MASK1_TRUEFRIEND		0x2000000	// Ally did not fall and took no damage on VS Mario Bros. stage

#endif