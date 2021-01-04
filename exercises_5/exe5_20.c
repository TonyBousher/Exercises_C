#include<stdio.h>
#include<string.h>

void func(int,	char);

int main(){
	int side;
	char c;
	printf("Enter a side and char: ");
	scanf("%d%c\n\n",	&side,	&c);
	func(side,	c);

	return 0;
}

void func(int a,	char fillCharacter){
	for(int i=1;	i<=a;	i++){
		for(int z=1;	z<=a;	z++)
			printf("%c  ",	fillCharacter);
		puts("\n");
	}
}