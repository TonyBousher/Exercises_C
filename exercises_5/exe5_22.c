#include<stdio.h>

int cheloe(int,int);
int ostatok(int,int);

int main(){
	int number, div=10000;
	printf("Enter an integer between 1 and 32767: ");
	scanf("%d",	&number);

	while(number>=10){
		if(number>=div){
			printf("%d  ",	cheloe(number, div) );
			number=(ostatok(number, div));
			div=cheloe(div,10);
		}else
		div=cheloe(div,10);
	}
	printf("%d\n", number );
	return 0;
}

int ostatok(int a,	int b){
	return	a%b;
}

int cheloe(int a,	int	b){
	return a/b;
}