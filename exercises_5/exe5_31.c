#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int flip();

int main(){
	int count_h=0;
	int count_t=0;
	int count=0;
	for(int i=1;	i<=100;	i++){
		if(count==10){
			puts("\n");
			count=0;
		}
		if(flip()){
			printf("Heads  ");
			count_h++;
			count++;
		}else{
			printf("Tails  ");
			count_t++;
			count++;
		}
	}
	puts("\n\n");
	printf("Heads : %d\n",	count_h );
	printf("Tails : %d\n",	count_t);
}

int flip(){
	int	f=rand()%2;
	if(f==1)
		return 1;
	else
		return 0;

	return f;
}