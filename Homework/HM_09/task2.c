#include <stdio.h>

int main(){
	int arr[7] = {10,-5,15,1,11,-2,-6};
	for (int i = 0; i < 6; i++) {
        	for (int j = 0; j < 6 - i; j++) {
            		if (arr[j] > arr[j + 1]) {
                		int temp = arr[j];
                		*(arr +j) = *(arr + j + 1);
                		*(arr + j + 1) = temp;
            		}
        	}
    	}
	for(int i = 0; i < 7; i ++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}
