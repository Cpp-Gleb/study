#include <stdio.h>
#define PRINT_VALUE(number) printf("%d\n",value_##number);
//macros with param/## fixed world for optimise  code

int main(){
	int value_one =10, value_two = 20;
	PRINT_VALUE(one)
	PRINT_VALUE(two)

	return 0;
}
