#include <stdio.h>

int main(){
	long long int n = 0;
	printf("put n! here:");
	scanf("%lld",&n);
	long long int i = 1;
	while(n/i != 1){
		n/=i;
		if(n/i == 0){
			printf("your number not n! please put correct number!\n");
			return 0;
		}
		i++;

	}
	printf("n = %lld\n",n);
	return 0;
}
