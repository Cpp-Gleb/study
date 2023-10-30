#include <stdio.h>

int main(){

	int arr[] = {0,1,2,3,4,5,6};
/***
	printf("put numbers of array: ");
	scanf("%d",&n);
	int arr[n];
	for(int i = 0;i < n;i++){
		printf("put num: ");
		scanf("%d",&arr[i]);
	}
***/
	int five = *(arr +5);
	printf("five_elem: %d\n", five);
	return 0;
}
