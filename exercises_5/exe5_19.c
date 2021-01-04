#include<stdio.h>

int func(int);

int main(){
	int side;
	printf("Enter a side: ");
	scanf("%d\n\n",	&side);
	func(side);

	return 0;
}

int func(int a){
	for(int i=1;	i<=a;	i++){
		for(int z=1;	z<=a;	z++)
			printf("*  ");
		puts("\n");
	}
	return 0;
}