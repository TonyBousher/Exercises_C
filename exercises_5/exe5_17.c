#include<stdio.h>

int multipe(int,	int);

int main(){
	int num1,	num2;
	system("clear");
	for(int i=1;	i<=3;	i++){
		printf("Enter two integer: ");
		scanf("%d%d",	&num1,	&num2);
		if(multipe(num1,num2))
			printf("%d is a multiple %d\n\n",	num1,	num2 );
		else
			printf("%d is not a multiple %d\n\n",	num1,	num2);
	}

	return 0;
}

int multipe(int a,	int	b){

	return !(a%b);
}