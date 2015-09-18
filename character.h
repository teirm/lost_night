#define STAT_COUNT 5 			/* Stats available: Str, Con, Dex, Int, Lck */
#define EQUIP_COUNT 5			/* Equip Slots: Head Body Legs Lhand Rhand */
#define ABILITY_COUNT 40			/* Special Abilities */ 

typedef struct {
	char *name;					/* Name of Character */
	char *job;					/* Job Type: FRMR, LBRN, JUGG, HNTR ... */
	char *equips[EQUIP_COUNT];	/* Equipment in Slots */
	
	int level;					/* Current Level */	
	int exp;					/* Experience Earned */
	int abilities[40];			/* Abilities available (includes spells) */
	int stats[STAT_COUNT];		/* Player statistics (affects abilities, attacks) */
} CHARACTER;

		
