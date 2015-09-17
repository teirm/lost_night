#include <stdio.h>
#include <stdlib.h>

void clr_scrn(void)
{
	system("clear");
}

int main(int argc, char **argv)
{
	
	clr_scrn();	
	printf("~Lost Night~\n");
	printf("1) New Game\n2) Load Game\n3) Manual\n");

	return 0;
}
