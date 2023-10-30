#include <stdio.h>
int main(){
	int a=10,b=9;
	printf("a=%d, b=%d\n",a,b);
	a +=b;
	b = a -b;
	a -=b;
	printf("a=%d, b=%d",a,b);
	return 0;
}
