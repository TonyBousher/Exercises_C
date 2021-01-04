#include <stdio.h>
#include <math.h>

double func(double x);

int main(void){

	double x;

	for(int counter=1;	counter<=5;	counter++){
		printf("Enter a floating point value: ");
		scanf("%lf",	&x);
		func(x);
	}
	return 0;
}

double func(double x){
	int	y;
	y=floor(x+.5);
	printf("%.2f rounded is %d\n",	x,	y );

	return	0;
}
