#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){

	int x;
	system("clear");
	srand(time(NULL));
	printf("Number from 1 to 2: %d\n",	1+(rand())%2 );
	printf("Number from 1 to 100: %d\n",	1+(rand())%100 );
	printf("Number from 0 to 9: %d\n",	(rand())%10 );
	printf("Number from 1000 to 1112: %d\n",	(1000+rand())%1113 );
	printf("Number from -1 to 1: %d\n",	(rand()%3)-1 );
	printf("Number from -3 to 11: %d\n",	(rand()%15)-3 );

	return	0;
}