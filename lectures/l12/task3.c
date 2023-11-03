#include <stdio.h>

struct person{
	int Age;
	char Name[20];
};

int main(){
	struct person Tom = {15,"Tom"};
	printf("put name: ");
	scanf("%s", Tom.Name);
	printf("put age: ");
	scanf("%d", &Tom.Age);
	printf("Name: %s\nAge: %d\n",Tom.Name,Tom.Age);
	return 0;
}
