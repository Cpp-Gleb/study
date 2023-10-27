/***
Выполнить сравнение 2-х строк, введенных с клавиатуры с
игнорированием пробелов.
**/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	char  *s1 = (char*)malloc(128);
	//char *s1 = "jkdenuiewn imwvoiiew ewvm ";
	char  *s2 = (char*)malloc(128);
	char  *s3 = (char*)malloc(128);
	char  *s4 = (char*)malloc(128);
	char *istr;
	
	istr= gets (s1);
	//scanf("%255s",s2);
	// скан только до пробела, почему?
	//printf("%s\n",s1);
		//printf("%c",*s1);

	//for(int i = 0; i < strlen(s1);i++){
	//	if(*s1 != ' '){
	//		*s3 += *s1;
	//	}
	//	else{
	//		s1++;
	//	}
	//}
	printf("%s\n", s1);
	return 0;
}
