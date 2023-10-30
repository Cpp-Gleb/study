#include <stdio.h>
#include <stdlib.h>

int main (){
	const int x = 10, y = 20;
	int ** array = (int**) malloc (sizeof (int*) * x);
	for (int i = 0; i < x; i++) {
  		array [i] = (int*) malloc (sizeof (int)*y);
	}
	for(int i = 0; i < x;i++ ){
		for(int j=0;j<y;j++){
			printf("%d ",i*j);
		}
		 printf("\n");
	}
	free(array);
	return 0;
}
