#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


enum Action {
	ADD,
	SHOW,
	FIND,
	EXIT
};

struct Person{
	char* first_name;
	char* second_name;
	char* surname;
	char* telephone_number;
};

void Add(struct Person Person, char* datafile){
	FILE *fp = fopen(datafile, "w");
	if(fp){
		printf("Put contact First name: ");
		scanf("%s", Person.first_name);
		fputs(Person.first_name, fp);
		printf("Put contact Second name: ");
		scanf("%s", Person.second_name);
		fputs(Person.second_name, fp);
		printf("Put contact surename: ");
		scanf("%s", Person.surname);
		fputs(Person.surname, fp);
		printf("Put contact phone number: ");
		scanf("%s", Person.telephone_number);
		fputs(Person.telephone_number, fp);//make array of nums contacts and read number to it after that copy and print to func
		fclose(fp);
		printf("Contact add to file\n");
	}
}

void Show(char * datafile){
	char buffer[256];
	FILE *fp = fopen(datafile, "r");
	if(fp){
		while((fgets(buffer,256,fp)) != NULL){
			printf("%s\n",buffer);
		}
		fclose(fp);
	}
}

void Find(){
	//put surname number which we wanna find:
	//binary search with surname
	//print in console contact
}

void sort(){
	//sort add contact with surname with ascii table
}

void Choise(enum Action op, char* datafile, struct Person Person){
	switch(op){
                        case ADD:
                                Add(Person, datafile);
				break;
                        case SHOW:
                                Show(datafile);
				break;
                        case FIND:
                                Find();
				break;
                        default:
                                printf("try again\n");
				break;
	}
}

int main(){
	int operand;
	char *datafile = "phonebook.txt";
	struct Person contacts[200];
	int i = 0;
	while(true){
		printf("choise operation:\n0 - add contact\n1 - show my contacts\n2 - find in my contacts\n3 - exit of phonebook\n");
		scanf("%d", &operand);
		if(operand == 3){break;}
		contacts[i].first_name = (char*)malloc(20);
        	contacts[i].second_name = (char*)malloc(20);
        	contacts[i].surname = (char*)malloc(20);
		contacts[i].telephone_number = (char*)malloc(15);
		Choise(operand, datafile, contacts[i]);
		i++;
	}
	return 0;
}
