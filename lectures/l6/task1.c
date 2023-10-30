#include <stdio.h>

int main (){
	double num;
	printf("put any number\n");
	scanf("%lf",&num);
	if(num <10){
		printf("num less 10\n");
	}
	else if(num == 10){
                printf("num equal 10\n");
        }
	else{
		printf("num grater 10\n");
	}
	return 0;
}
