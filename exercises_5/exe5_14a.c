#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int	func(int r);

int	main(void){
	int result;
	system("clear");
	srand(time(NULL));
	result=1+(rand()%9);
	printf("number is: %d\n",	func(result) );

	return	0;
}

int func(int r){
	int	number;
	if((r%2)==0)
		number=r;
	else
		number=r+1;

	return number;
}