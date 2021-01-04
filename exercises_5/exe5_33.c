#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int exer(void);

int main(){
	srand(time(NULL));
	exer();
}	

int exer(void){
	int a,b,c,d;
	int ot=0;
	printf("Enter -1 for END\n");
	while(ot!=-1){
		a=rand()%9+1;
		b=rand()%9+1;
		printf("How much is %d times %d: ", a,	b);
		scanf("%d",	&ot);
		while(ot!=-1){
			if(a*b==ot){
				c=rand()%4+1;
				switch(c){
					case 1:
					printf("Veru good!\n");
					break;
					case 2:
					printf("Exellent!\n");
					break;
					case 3:
					printf("Nice work!\n");
					break;
					case 4:
					printf("Keep up the good work!\n");
					break;
				}
				break;
			}else{
				d=rand()%4+1;
				switch(d){
					case 1:
					printf("No.Please try again.\n");
					break;
					case 2:
					printf("Wrong.Try once more.\n");
					break;
					case 3:
					printf("Don't give up!\n");
					break;
					case 4:
					printf("No.Keep trying.\n");
					break;
				}
				printf("How much is %d times %d: ", a,	b);
				scanf("%d",	&ot);
			}
		}
	}
}