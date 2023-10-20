#include <stdio.h>

int main(){
	unsigned int  count = 10;
	while(count != -1){
		if(count == 0){
			printf("ZERO!!!\n");
		}
		else{
			printf("%u\n",count);
		}
		count--;
	}
	return 0;
}
