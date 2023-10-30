#include <stdio.h>

int main(){
	long long int mult = 1;
	for(int i = 10; i < 100; i++){
		if(i %13 == 0){
			mult *=i;
		}
	}
	printf("%lld\n",mult);
	return 0;
}
