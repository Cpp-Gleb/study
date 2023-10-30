#include  <stdio.h>

int main(){
	char ans;
	printf("You like cats?(y/n)");
	scanf("%c",&ans);
	switch(ans){
	case 'y': printf("G00d!");
	break;
	case 'n': printf("No problem;)");
	break;
	default: printf("print only y/n :(");
	}
	return 0;
}
