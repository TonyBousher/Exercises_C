#include<stdio.h>

double min(double,double,double);

int main(){
	double num1,num2,num3;
	printf("Enter three float numbers: ");
	scanf("%lf%lf%lf",&num1,&num2,&num3);
	printf("Min is: %g\n", min(num1,num2,num3) );

	return 0;
}

double min(double a,	double b,	double c){
	double min=a;
	if(a>b)
		min=b;
	if(b>c)
		min=c;
	return min;
}