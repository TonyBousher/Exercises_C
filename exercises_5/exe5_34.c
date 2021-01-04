#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int multiplication(void);	// prototype function
int funcTrue(void);
int funcFalse(void);

int main(){
	srand(time(NULL));
	multiplication();
	return 0;
}

int funcTrue(void){
	int num=rand()%4;
	switch(num){
		case 0:
		printf("Very good!\n\n");
		break;
		case 1:
		printf("Excellent!\n\n");
		break;
		case 2:
		printf("Nice work!\n\n");
		break;
		case 3:
		printf("Keep up the good work!\n\n");
		break;
	}

}

int funcFalse(void){
	int num=rand()%4;
	switch(num){
		case 0:
		printf("No.Please try again.\n\n");
		break;
		case 1:
		printf("Wrong.Try once more.\n\n");
		break;
		case 2:
		printf("Don't give up!\n\n");
		break;
		case 3:
		printf("No.Keep trying.\n\n");
		break;
	}

}

int multiplication(void){
	int x,	y,	count,	result;
	int wrong=0, right=0;	// счетчик для правельных, неправельных ответов

	for(count=1;count<=10;count++){
		x=rand()%9+1;
		y=rand()%9+1;
		printf("How much is %d times %d: ", x,	y );
		scanf("%d",	&result);

		while(result!=x*y){
			wrong++;
			funcFalse();
			scanf("%d",	&result);
		}

			funcTrue();
			right++;
	}
	if((double)right/(right+wrong)<.75)
		printf("Please ask your teacher for additional help.\n");
	else
		printf("Very good!\n");

	return 0;
}