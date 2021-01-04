#include<stdio.h>

int even(int);

int main(){
	int integ;
	for(int i=1;	i<=5;	i++	){
		printf("Enter integer: ");
		scanf("%d",	&integ);
		if(even(integ))
			printf("%d is even\n\n",	integ );
		else
			printf("%d is not even\n\n",	integ );
	}

	return 0;
}

int even(int e){
	return !(e%2);
}