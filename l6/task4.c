#include <stdio.h>

int main(){
	int x =1;
	switch(1){
		case 1:
		{
			int z = 5;
			printf("z = %d",z);
			break;
		}
		default:{
			printf("default case");
			break;
		}
	}
	return 0;
}
