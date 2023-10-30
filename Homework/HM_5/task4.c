#include <stdio.h>

int main(){
	double a = 2;
	double sq =a *a; // a^2
	double ftr =sq*sq; //a^4
	double fv = ftr *a; // a^5
	double tn = fv *fv; // a^10
	printf("a^4=%lf \n a^10= %lf \n", ftr,tn);
	return 0;
}
