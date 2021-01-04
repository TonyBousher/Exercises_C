#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int exer(void);

int main(){
	srand(time(NULL));
	exer();
}	

int exer(void){
	int a,b;
	int ot=0;
	printf("Enter -1 for END\n");
	while(ot!=-1){
		a=rand()%9+1;
		b=rand()%9+1;
		printf("How much is %d times %d: ", a,	b);
		scanf("%d",	&ot);
		while(ot!=-1){
			if(a*b==ot){
				printf("Very GOOD!!!\n");
				break;
			}else{
				printf("No.Pleas try again.\n");
				printf("How much is %d times %d: ", a,	b);
				scanf("%d",	&ot);
			}
		}
	}
}