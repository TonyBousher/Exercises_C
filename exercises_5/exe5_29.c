#include<stdio.h>

int gcd(int,	int);

int main(){
	int num,	num2;
	system("clear");
	for(int i=1;	i<=5;	i++){
		printf("Enter two different integers: ");
		scanf("%d%d",	&num,	&num2);
		printf("Gsd is : %d\n\n",	gcd(num,num2));
	}	
}

int gcd(int a,	int	b){
	int min=a;
	if(b<min)
		min=b;
	min/=2;
	while(min>=0){
		if(a%min==0	&&	b%min==0)
			return	min;
		else
			min--;
	}
}