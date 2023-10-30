#include <stdio.h>

void print_arr(int arr[], int n){
	for(int i = 0; i< n;i++){
		printf("arr[%d] = %d\n", i,arr[i]);
	}
}

void print_arr2(int arr[][5], int k, int n){
        for(int i = 0; i< k;i++){
		for(int j = 0; j <n;j++){
			printf("arr[%d][%d] = %d\n",i,j,arr[i][j]);
		}
                printf("\n");
        }
}

int main(void){
	int q[5] = {1,2,3,4,5};
	int x[2][5] = {{1,2,3,4,5},{1,2,3,4,5}};
	print_arr(q,5);
	print_arr2(x,2,5);
	return 0;
}
