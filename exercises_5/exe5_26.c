#include<stdio.h>

int perfect(int);

int main(void){
	int num;
	for(num=1;	num<=10000;	num++){
		perfect(num);
	}
	return 0;
}

int perfect(int a){
	int i=1;
	int del=0;

	while(i<a){
		if((a%i)==0){
			del+=i;
			i++;
		}else
			i++;
	}
	if(del==a){
		printf("integer %d is perfect\n",	a);
		i=1;
		del=0;
		while(i<a){
		if((a%i)==0){
			printf("%d+",	i);
			i++;
		}else
			i++;
	}
	puts("\n");
	}	
	return 0;
}