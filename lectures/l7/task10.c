#include <stdio.h>

int main(){
	int sum = 0;
	for(int i = 100; i < 201; i++){
		if(i % 17 == 0){
			sum+=i;
		}
	}
	printf("%d\n",sum);
	return 0;
}
