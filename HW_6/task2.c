#include <stdio.h>

int main(){
	int mm;
	printf("put month: ");
	scanf("%d",&mm);
	printf("\n");
	switch(mm){

	case 3 ... 5:
		printf("Spring\n");
		break;

	case 6 ... 8:
		printf("Summer\n");
                break;
	case 9 ... 11:
		printf("autumn\n");
                break;
	case 12:
		printf("Winter\n");
                break;
	case 1 ... 2:
		printf("Winter\n");
                break;
	default:
		printf("Error put correct number!\n");
		break;
	}
	return 0;
}
