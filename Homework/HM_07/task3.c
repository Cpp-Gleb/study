#include <stdio.h>

int main(){

	int n = 0;
	printf("put number:");
	scanf("%d",&n);
	for(int i =1;i < n;i++){
		if(i < n-1){
                        for(int k = n-1; k > i; k--){
                        	printf(" ");
			}
                }
		for(int j = i; j > 0; j--){
			printf(" ^");
		}
	printf("\n");
	}
	return 0;
}
