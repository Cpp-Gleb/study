#include  <stdio.h>

struct person{
	int Age;
	char *Name;
};

int main(){
	struct person Tom = {38,"Tom"};
	struct person Bob = Tom;
	Bob.Name = "Bob";
	printf("Name: %s\n Age: %d\n\n",Bob.Name,Bob.Age);
	printf("Name: %s\n Age: %d\n\n",Tom.Name,Tom.Age);
	return 0;
}
