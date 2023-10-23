#include <stdio.h>

int main(){
	int last = 88;

	for(int i =35; i < last;i++){
		if(i % 7 == 1 || i % 7 == 2 || i % 7 == 5){
			printf("%d\n",i);
		}
	}
	return 0;
}
