#include <stdio.h>

void min(int a, int b);
void max(int a, int b);
void sum(int a, int b);
void difference(int a, int b);
void product(int a, int b);
void quotient(int a, int b);
void exit();
int main(){
	int a,b;
	int operand;
	while(true){
		printf("shoice operation: \n0 - find min\n1 - find max\n2 - find sum\n3 - find difference\n4 - find product\n5 - find quotient\n6 - exit\n");
		scanf("%d",&operand);

		void (*operation[6])(int, int)  = {min, max, sum, difference, product, quotient}
		int lenth  = sizeof(operation)/sizeof(operation[0]);
		printf("put numbers to operation: ");
		scanf("%d %d", &a, &b);
		switch(operand){
			case '0':
				operation[0](a,b);
			case '1':
				operation[1](a,b);
			case '2':
				operation[2](a,b);
			case '3':
				operation[3](a,b);
			case '4':
				operation[4](a,b);
			case '5':
				operation[5](a,b);
			case '6':
				exit();
			default:
				printf("put one of operations!");
		}
	}
	return 0;
}

int min(int a, int b){
	if(a >=b)
		printf("%d",b);
	else
		printf("%d",a);
}

int max(int a, int b){
        if(a >=b)
                printf("%d",a);
        else
                printf("%d",b);
}

int sum(int a,int b){
	printf("%d",a+b);
}

int difference(int a, int b){
	printf("%d",a-b);
}

int product(int a, int b){
	return a*b;
}

int quotient(int a, int b){
	if(b != 0)
		return a/b;
	else
		return 403;
}



