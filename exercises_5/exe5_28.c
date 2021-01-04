#include<stdio.h>

int revers(int);

int main(){
	int num;
	printf("Enter integer between 1 and 9999: ");
	scanf("%d",	&num);
	printf("%d revers %d\n",num,	revers(num) );
}

int revers(int n){
	int n1,n2,n3,n4,r;
	n1=n/1000;
	n2=n%1000/100;
	n3=n%100/10;
	n4=n%10;
	r=(n4*1000)+(n3*100)+(n2*10)+n1;
	return r;
}