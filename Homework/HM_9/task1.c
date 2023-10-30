#include <stdio.h>
#include <stdlib.h>

int main(){
	//a
	printf("var a\n");
	int arr[5][7] = {{1,2,3,4,5,6,7},{0,1,2,3,4,5,6},{1,2,3,4,5,6,7},{3,4,5,6,7,8,9},{1,2,3,4,5,6,7}};
	for(int i = 0; i < 5; i++){
		for(int j = 0;j < 7;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	//b
	printf("var b\n");
	int arrb[36];
	for(int i =0;i < 35; i++){
		arrb[i]  = i%7;
		printf("%d ",arrb[i]);
		if(i % 7 == 6)
			printf("\n");
	}
	//c
	printf("var c\n");
	int arrc[5][7];
	for(int i = 0; i < 5; i++){
                for(int j = 0;j < 7;j++){
			arrc[i][j]= i*j;
                        printf("%d ",arrc[i][j]);
                }
                printf("\n");
        }
	return 0;
}
