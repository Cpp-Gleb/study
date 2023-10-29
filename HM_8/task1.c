/***
Выполнить сравнение 2-х строк, введенных с клавиатуры с
игнорированием пробелов.
**/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	char  *s1 = (char*)malloc(128);
	char  *s2 = (char*)malloc(128);
	char *istr1 = (char*)malloc(128);
	char *istr2 = (char*)malloc(128);
	char *istr3 = (char*)malloc(128);
	char *istr4 = (char*)malloc(128);
	char *istr5 = (char*)malloc(128);
	char *istr6 = (char*)malloc(128);
	char sep[100] = " ";
	printf("put first str:");
	istr1 = gets (s1);
	printf("put secound str:");
	istr2 = gets (s2);
	istr3 = strtok (s1,sep);
	printf("first str without SPACE: ");
	 while (istr3 != NULL)
   	 {
     		printf ("%s",istr3);
		istr5 = strcat(istr5,istr3);
      		istr3 = strtok (NULL,sep);
   	 }
	printf("\n");
	printf("secound str without SPACE: ");
	istr4 = strtok (s2,sep);
	while (istr4 != NULL)
         {
                printf ("%s",istr4);
		istr6 = strcat(istr6,istr4);
                istr4 = strtok (NULL,sep);
         }
	printf("\n");
	if(strcmp(istr5,istr6) == 0){
		printf("strings is equal\n");
	}
	else{
		printf("strings is different\n");
	}
	return 0;
}
