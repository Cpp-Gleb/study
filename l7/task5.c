#include <stdio.h>

#define SWAP(type,a,b) ({\
typeof(a) tmp = a;\
a = b;		\
b = tmp;})

//transport body of macros
int main(){
	int num1 = 5, num2 = 11;
	printf("%d %d\n", num1,num2);
	SWAP(int,num1,num2);
	//SWAP(float,num1,num2);
	printf("%d %d\n", num1,num2);
	return 0;
}
