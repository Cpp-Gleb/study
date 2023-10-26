/***
Выполнить сравнение 2-х строк, введенных с клавиатуры с
игнорированием пробелов.
**/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	char  *s1 = (char*)malloc(256);
	char  *s2 = (char*)malloc(256);
	char  *s3 = (char*)malloc(256);
	char  *s4 = (char*)malloc(256);
	scanf("%255s",s1);
	scanf("%255s",s2);
	printf("%s",s1);
	while (s1 != s1 +255)
   	{
		
		if(*s1 = ' '){
			*s1 = NULL;
		}
		s1++;
   	}
	return 0;
}
