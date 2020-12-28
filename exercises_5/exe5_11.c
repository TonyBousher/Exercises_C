#include <stdio.h>
#include <math.h>


double roundToInteger(double);
double roundToTenths(double);
double roundToHundreths(double);
double roundToThousandths(double);

int main(void){

	double number;

	for(int count=1;	count<=3;	count++){
		printf("Enter value:\n");
		scanf("%lf",	&number);

		printf("%f raunded is %f\n",	number,	roundToInteger(number) );
		printf("%f raunded is %f\n",	number,	roundToTenths(number) );
		printf("%f raunded is %f\n",	number,	roundToHundreths(number) );
		printf("%f raunded is %f\n",	number,	roundToThousandths(number) );
		puts("");
	}
	return	0;
}

double roundToInteger(double n){
	return floor(n+.5);
}
double	roundToTenths(double n){
	return floor(n*10+.5)/10;
}
double	roundToHundreths(double n){
	return floor(n*100+.5)/100;
}
double	roundToThousandths(double n){
	return floor(n*1000+.5)/1000;
}

