#include<stdio.h>

int out_seconds(int,int,int);

int hours,minutes,seconds,temp;

int main(){
	printf("Enter time in hours minutes and seconds:  ");
	scanf("%d%d%d",	&hours,	&minutes,	&seconds);
	temp=out_seconds(hours,minutes,seconds);
	printf("Enter next event in hours minutes and seconds:  ");
	scanf("%d%d%d",	&hours,	&minutes,	&seconds);
	printf("interval is: %d seconds\n",	out_seconds(hours,minutes,seconds)-temp );
}

int	out_seconds(int  h,	int m,	int	s){
	return 3600*h+60*m+s;

}