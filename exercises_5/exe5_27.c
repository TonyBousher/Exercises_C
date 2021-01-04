#include<stdio.h>

int simple(int);

int main(){
	int num;
	for(num=1;num<=10000;num++){
		if(simple(num))
			printf("%d\n", num);
	}
	return 0;
}

int simple(int a){
	for(int i=2;i<a;i++){
		
    }  
}