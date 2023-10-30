#include <stdio.h>
int main(){
	int n;
	printf("put number: ");
	scanf("%d",&n);
	unsigned long int sum = 0;
	for(int i = 0; i < n; i++){
		sum += (n + i)*(n + i);
	}
	printf("equal of square of whole numbers in (n ... 2n) = %lu\n",sum);
	return 0;
}
