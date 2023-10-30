#include <stdio.h>

int main(){
	long int a = 12;
	long int *p = &a;
	printf("%ld\n",*p);
	char c = 'd';
	char *pc = &c;
	printf("%c\n",*pc);
	double x = 5.6;
	double *pd = &x;
	printf("%lf\n",*pd);
	long int *pp = &a;
	printf("%ld\n",*pp);
	double *pdd = &x;
	double *pddd = &x;
	printf("%lf %lf\n",*pdd,*pddd);
	printf("sizeof (p) = %ld\n",sizeof(p));
	printf("sizeof (pd) = %ld\n",sizeof(pd));
	printf("sizeof (pc) = %ld\n",sizeof(pc));
	return 0;
}
