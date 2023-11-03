#include <stdio.h>
#include <stdbool.h>

enum ACTION {
	ADD,
	SHOW,
	FIND,
	EXIT
};

struct Person{
	char* first_name;
	char* secound_name;
	char* surname;
	int telephone_number;
};

void Add(Person, datafile){
	FILE *fp = fopen(data_file, "w");
	if(fp){
		fputs(Person.first_name, Person.secound_name, Person.surname, Person.telephone_number, fp);
		fclose(fp);
		printf("Contact add to file\n");
	}
}

void Show(char*buffer,datafile){
	FILE *fp = fopen(datafile, "r");
	if(fp){
		while((fgets(buffer,256,fp)) != NULL){
			printf("%s",buffer);
		}
		fclose(fp);
	}
}

int main(){
	int operand;
	while(true){
		printf("choise operation:\n ...")
		scanf("%d", &operand);
		//вынести в функциию
		switch(operand){ // см практика 1 лекция 12
			case ADD:
				Add;
			case SHOW:
				Show;
			case '2':
				Find; //развернуть поиск по имени имени и фамилии
			case '3':
				return 0;
			default:
				printf("try again");
	}
	return 0;
}
