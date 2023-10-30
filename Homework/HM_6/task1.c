#include <stdio.h>

int main(){
	for(int i =1;i < 6;i++){
		if(i < 5){
                        for(int k = 5; k > i; k--){
                        	printf(" ");
			}
                }
		for(int j = i; j > 0; j--){
			printf(" %d", j);
		}
	printf("\n");
	}
	return 0;
}
