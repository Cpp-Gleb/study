#include <stdio.h>

#define TED 10

int main(){
	#ifdef TED
		printf("Hello Ted!\n");
	#else 
		printf("Hello everyone!\n");
	#endif
	#ifndef RALF
		printf("Ralf not declaration\n");
	#endif

	return 0;
}
