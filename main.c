#include <stdio.h>
#include <stdlib.h>

#include "character.h"

/* Need to think about how to set up these functions...and prototype them appropriately */
void clr_scrn(void);
int start_screen(void);
void new_game(void);
void load_game(void);
void view_man(void);

void clr_scrn(void)
{
	system("clear");
}

int main(int argc, char **argv)
{
	char usr_choice;

	CHARACTER *player;

	clr_scrn();	
	printf("~Lost Night~\n");
	printf("1) New Game\n2) Load Game\n3) Manual\n4) Exit");

	scanf("%c", &usr_choice);

	switch(usr_choice) {
		case '1':
			printf("New Game Started\n");
			player = (CHARACTER*) malloc(sizeof(CHARACTER));	
				
			
			break;
		case '2':
			printf("Load Game\n");
			break;
		case '3':
			printf("Manual Selected\n");
			break;
		default:
			printf("Invalid input.  Going to Manual.\n");
			break;
	}

	return 0;
}
