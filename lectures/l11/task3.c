#include <stdio.h>

int add(int x, int y){
	return x + y;
}

int substruct(int x, int y){
	return x - y;
}

int main(void){
	int a = 10;
	int b = 5;
	int result;
	int (*operation)(int, int);

	operation = add;
	result = operation(a,b);
	printf("result = %d\n", result);

	operation = substruct;
        result = operation(a,b);
        printf("result = %d\n", result);
	return 0;
}
