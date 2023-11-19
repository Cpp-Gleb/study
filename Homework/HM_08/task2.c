/***
*Для 2-х строк введенных с клавиатуры определить все
возможные варианты вхождения второй строки в первую.
***/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	int counter=0;
	int k = 0;
	char  *s1 = (char*)malloc(128);
	char *istr1 = (char*)malloc(128);
	char  *s2 = (char*)malloc(128);
	char *istr2 = (char*)malloc(128);
	printf("put line: ");
	istr1 = gets (s1);
	printf("put secound line: ");
	istr2 = gets (s2);
	for(int i = 0; i < strlen(s2);i++){
		int tmp = 0;
		k = i;
		for(int j = 0; j < strlen(s1);j++){
			printf("%d %c %d %c\n",i,*(s2+i),j,*(s1+j));//debug)
			if(*(s2 + i) == *(s1 + j)){
				// df
				//dfdfdf //6 cor // 4 out
				tmp++;
//				if(i < strlen(s2)-1)
//					i +=1-k;
			}
		}
		i = k;
//		if(tmp >= strlen(s2))
			counter+=tmp;
	}
	// defenatly unwork i know that know i have bugs))
	printf("str2 can go in str1 %d times\n",counter);
	return 0;
}
