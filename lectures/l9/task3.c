#include <stdio.h>

int main(){
	int arr[2][4] = {{1,2,3,4},{1,1,3,4}};
	int val = *(*(arr+1)+2);
	printf("%d\n", val);
	return 0;
}
