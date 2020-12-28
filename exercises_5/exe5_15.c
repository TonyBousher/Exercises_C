#include<stdio.h>
#include<math.h>

double hypotenuse(double,	double);  //function prototype

int main(void){

	double side1,	side2;

    for(int count=1;	count<=3;	count++){
		printf("Enter side #1: ");
		scanf("%lf",	&side1);
		printf("Enter side #2: ");
		scanf("%lf",	&side2);

		printf("Side hypotenuse #%d is: %2.f\n\n",	count,	 hypotenuse(side1,side2));
	}	

	return 0;
}

double hypotenuse(double s1, double	s2){
	double	side_h;
	side_h=sqrt(pow(s1,2)+pow(s2,2));

	return side_h;
}