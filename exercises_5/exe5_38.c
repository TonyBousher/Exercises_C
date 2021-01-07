#include<stdio.h>

double fibonacci(double);

int main(){
	double num=30;
	fibonacci(num);
	return 0;
}

double fibonacci(double n){
	double fib1=0,fib2=1,num;
	for(int i=0;i<=n;i++){
		num=fib1+fib2;
		fib1=fib2;
		fib2=num;
		printf("%g\n", num);
	}
	return 0;
}