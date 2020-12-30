#include<stdio.h>

int prime(int);

int main(){
	int count=0,num;

	for(num=1;num<=10000;num++){
		if(prime(num)){
			++count;
			printf("%5d",	num);
		}
		if(count==35){
			printf("\n");
			count=0;
		}
				
	}
}

int prime(int n){
	int i;
	for(i=2;i<=(n/2);i++){
		if((n%i)==0)
			return	0;
	}
	return	1;
}