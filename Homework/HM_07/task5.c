#include <stdio.h>

#define SEC_PER_YEAR 365*24*60*60

int main(){
	long long int n= 1;
	printf("put here numbers years in which you interest number of secounds: ");
	scanf("%lld",&n);
	printf("Do you know that in %lld years, %lld secounds?\n",n,  n*SEC_PER_YEAR);
	return 0;
}
