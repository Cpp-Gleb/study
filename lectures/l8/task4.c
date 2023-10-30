#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	char *name =(char*)malloc(10);
	printf("put your name: ");
	scanf("%9s",name);
	printf("%9s\n",name);
	return 0;
}
