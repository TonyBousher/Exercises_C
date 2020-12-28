#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int	main(void){

	system("clear");
	srand(time(NULL));
	printf("numbers 2,4,6,8,10: %d\n",	(1+(rand()%5))*2);
	printf("numbers 3,5,7,9,11: %d\n", (rand()%5)*2+3);
	printf("numbers 6,10,14,18,22:  %d\n",	((rand()%5)*2+3)*2);
}	