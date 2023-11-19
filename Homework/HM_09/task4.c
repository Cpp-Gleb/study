#include <stdio.h>

int main(){
	int max = 0;
	double arr[30];
	for(int i = 0; i < 30;i++){
		scanf("%lf",&arr[i]);
	}
	for (int i = 1; i < 30; i++){
		if(arr[i] > arr[max]){
			max = i;
		}
	}
	printf("index of max elem = %d\n",max);
	return 0;
}
