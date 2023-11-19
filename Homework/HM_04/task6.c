#include <stdio.h>
int main(){
	int Sec = 928320;
	printf("%d%d:%d%d:%d%d\n",Sec/3600%60/10,Sec/3600%60%10,Sec/60%60/10,Sec/60%60%10,Sec%60/10,Sec%60%10);
	return 0;
}
