#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int min(int a, int b);
int max(int a, int b);
int sum(int a, int b);
int difference(int a, int b);
int product(int a, int b);
int quotient(int a, int b);


int main(){
	int a,b;
	int operand;
	while(true){
		printf("shoice operation: \n0 - find min\n1 - find max\n2 - find sum\n3 - find difference\n4 - find product\n5 - find quotient\n6 - exit\n");
		scanf("%d",&operand);
		int (*operation[6])(int, int)  = {min, max, sum, difference, product, quotient};
		int lenth  = sizeof(operation)/sizeof(operation[0]);
		if(operand == 6)
                {
    //                    dispose(operation);
                        break;
                }
		printf("put numbers to operation: \n");
		scanf("%d %d", &a, &b);
		if(operand > 5 || operand < 0)
			printf("Error!!! Try again!\n");
		printf("result of operand %d: %d \n\n",operand, operation[operand](a, b));
	}
	return 0;
}

int min(int a, int b){
	if(a >= b)
		return b;
	else
		return a;
}

int max(int a, int b){
        if(a >= b)
                return a;
        else
                return b;
}

int sum(int a,int b){
	return a + b;
}

int difference(int a, int b){
	return a - b;
}

int product(int a, int b){
	return a * b;
}

int quotient(int a, int b){
	if(b != 0)
		return a / b;
	else
		return 0;
}
/***
void dispose(int(**)operation(int, int)){
	free(operation);
}
***/
