#include <stdio.h>
int main(){
	int n=1245,m=12,a=10;
	n /=m;
	while(n !=0){
		if(n /10 < a){
			a = n/10;
		}
	n /=10;
	}
	printf("%d",a);
	return 0;
}
