#include <stdio.h>

#define HELLO printf("Hello world!\n")
#define FOR for(int i = 0; i < 4; i++)

int main(){
	FOR HELLO;
	return 0;
}
