#include <stdio.h>

int main(){
int arr1[4] = {0,1,2,3};
int arr2[7] = {0,1,2,3,4,5,6};
int arr3[2][5] = {{0,1,2,3,4},{0,1,2,3,4}};
int arr4[4][6] = {{0,1,2,3,4,5},{0,1,2,3,4,5},{0,1,2,3,4,5},{0,1,2,3,4,5}};
int arr5[2][2][2] = {
		{{0,1},{0,1}},
		{{0,1},{0,1}},
		};
for(int i = 0;i < 2;i++){
	for(int j = 0;j < 2;j++){
		for(int k = 0;k<2;k++){
			printf("%d ",arr5[i][j][k]);
		}
		printf("\n");
	}
	printf("\n");
}

}
