#include <stdio.h>

int main(){
	int n;
	printf("put number: ");
	scanf("%d",&n);
	if(n > 7){
		unsigned long int mult = 1;
		for(int i = 8; i < n+1;i++){
			mult *= i;
		}
		printf("multiplate of numbers in 8 ... n: %lu\n",mult);
	}
	else{
		long long int mult = 1;
                for(int i = n; i < 9;i++){
                        mult *= i;
                }
                printf("multiplate of numbers in 8 ... n: %lld\n",mult);
	}
	return 0;
}
