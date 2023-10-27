#include <stdio.h>

int main(){
	int a[] = {4,1,-10,55,2,-5};
	int n = sizeof(a)/sizeof(a[0]);
	int *p = a;
	for(int i = 0; i < n-1; ++i){
		int *p_min = p;
		int *p_tmp = p+1;
		for(int j = i+1;j < n;++j){
			if(*p_tmp < *p_min){
				p_min = p_tmp;
			}
			p_tmp++;
		}
		int tmp = *p_min;
		*p_min=*p;
		*p=tmp;
		p++;
	}
	for(int i = 0; i < n;i++){
		printf("%d ", a[i]);
	}
	printf("\n");
	return 0;
}
