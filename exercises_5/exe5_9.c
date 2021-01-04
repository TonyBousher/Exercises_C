#include	<stdio.h>
#include	<math.h>

double calculateCharge(double hours);

int main(void){
	int i;
	double h, other_h,	charge,	other_charge;
	short	posit=1;

	printf("Enter the number of hours: ");
	for(i=1;	i<=3;	i++){
		if(posit){
			printf("\n%s\t%s\t%s\n",	"Car",	"Hours",	"Charge");
			posit=0;
		}
		scanf("%lf",	&h);
		other_h+=h;
		other_charge+=(charge=calculateCharge(h));

		printf("%d\t%.2f\t%.2f\n",	i,	h,	charge );
	}

	printf("%s\t%.2f\t%.2f\n",	"TOTAL",	other_h,	other_charge );

	return	0; 
}

double calculateCharge(double hours){
	double charge;
	if(hours<=3){
		charge=2.0;
	}else if(hours<24){
		charge=2.0+.5*ceil(hours-3.0);
	}else{
		charge=10.0;
	}

	return	charge;
}