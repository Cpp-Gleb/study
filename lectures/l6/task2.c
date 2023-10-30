#include <stdio.h>

int main(){
	int a =5;
	int b = 3;
	int rem = a%b;
	if(rem == 0)
		printf("a divisible by b\n");
	else
		printf("remaining of a/b =%d\n", rem);
	return 0;
}
