#include <stdio.h>

enum operation{
	ADD = 1,
	SUBTRACT = 2,
	MULTIPLY = 4
};

int calculate(int x, int y, enum operation op){
	switch(op){
	case ADD:
		return x+y;
	case SUBTRACT:
		return x-y;
	case  MULTIPLY:
		return x*y;
	default:
		return 0;

	}
}

int main(void){
	enum operation op = MULTIPLY;
	int result = calculate(4, 3, op);
	printf("Result: %d\n", result);
	result = calculate(4, 3, ADD);
	printf("Result: %d\n", result);
	result = calculate(4, 3, SUBTRACT);
	printf("Result: %d\n", result);
	return 0;
}
