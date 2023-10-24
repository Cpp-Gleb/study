#include <stdio.h>

#define MIN(value_first,value_secound) if(value_first < value_secound){printf("min is %d\n",value_first);}\
else{printf("min is %d\n",value_secound);}

int main(){
	int one = 0, two = 0;
	printf("put two numbers(with SPACE): ");
	scanf("%d %d",&one,&two);
	MIN(one,two)
	return 0;
}
