#include<stdio.h>
#include<math.h>

int	main(void)	{

	double h,	z;

	printf("Enter two different numbers: ");
    scanf("%lf%lf\n",	&h,	&z);
    
	while(h&&z!=-1){

		printf("%f okruglim do %.1f\n",	h,	floor(h) );
		printf("%f okruglim do %.1f\n",	z,	floor(z) );

		printf("Enter two different numbers: ");
    	scanf("%lf%lf\n",	&h,	&z);

	}

	return	0;
}