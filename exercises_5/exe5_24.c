#include<stdio.h>

int celcius(int);
int fahrenheit(int);

int main(){

	int count;
	int posit=1;

	for(count=1;	count<=212;	count++){
		if(posit){
			printf("C'\tF'\tF'\tC'\n");
			printf("_____________________________\n");
			posit=0;
		}
		if(count<32)
			printf("%d\t%d\n",count,	fahrenheit(count) );
		else if(count<=100)
			printf("%d\t%d\t%d\t%d\n",count,fahrenheit(count),count,celcius(count) );
		else
			printf("\t\t%d\t%d\n",count,celcius(count));
	}
	return 0;
}

int celcius(int f){
	return (f-32)/1.8;
}

int fahrenheit(int c){
	return c*1.8+32;
}

