#include  <stdio.h>

int fibonachi(int n){
	if(n == 0 || n ==1)
		return n;
	return fibonachi(n-1) + fibonachi(n - 2);
}

int main(){
	int fib4 = fibonachi(4);
	int fib5 = fibonachi(5);
	int fib6 = fibonachi(6);
	printf("4 fibonachi number: %d\n",fib4);
	printf("5 fibonachi number: %d\n",fib5);
	printf("6 fibonachi number: %d\n",fib6);
	return 0;
}
