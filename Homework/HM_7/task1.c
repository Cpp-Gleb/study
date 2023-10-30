#include <stdio.h>

int main(){

	for(int i = 200;i < 217;i++){
		if(i %17 == 0){
			printf("%d\n",i);
			break;
		}
	}
	return 0;
}
