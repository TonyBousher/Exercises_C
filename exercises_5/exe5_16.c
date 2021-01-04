#include<stdio.h>

int integerPower(int,	int);

int main(){
	int 	integer, exp;

	printf("Enter integer and exponent: ");
	scanf("%d%d\n\n",	&integer,	&exp);

	printf("%d to the power %d is: %d\n",	integer,	exp, integerPower(integer,	exp));

	return	0;
}

int integerPower(int base,	int exponent){
	int num=1;
	for(int count=1;	count<=exponent;	count++){
		num*=base;
	}

	return num;
}