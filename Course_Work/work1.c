#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

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
	FILE *fp = fopen(datafile, "a");
	if(fp){
		printf("Put contact First name: ");
		scanf("%s", Person.first_name);

		printf("Put contact Second name: ");
		scanf("%s", Person.second_name);

		printf("Put contact surename: ");
		scanf("%s", Person.surname);

		printf("Put contact phone number: ");
		scanf("%s", Person.telephone_number);

		fputs(Person.first_name, fp);
                fputs(" ", fp);

		fputs(Person.second_name, fp);
                fputs(" ", fp);

		fputs(Person.surname, fp);
                fputs(" ", fp);

		fputs(Person.telephone_number, fp);
		fputs("\n", fp);
		fclose(fp);
		printf("Contact add to file\n");
	}
}

void Show(char * datafile){
	char buffer[256];
	printf("\n                  Phonebook\n**********************************************\n\nYour contasts:\n");//redact menu
	FILE *fp = fopen(datafile, "r");
	if(fp){
		while((fgets(buffer,256,fp)) != NULL){
			printf("%s\n",buffer);
		}
		fclose(fp);
	}
	free(datafile);
	printf("\n");
}

void Find(struct Person *contacts, int count){
	char *find_name = (char*)malloc(20);
	printf("Put First_name person which u wanna find: ");
	scanf("%s", find_name);
	//printf("%s", contacts[0].second_name);
	for(int i = 0; i < count;i++){
		if(contacts[i].first_name == find_name){
			printf("%s ", contacts[i].first_name);
			printf("%s ", contacts[i].second_name);
			printf("%s ", contacts[i].surname);
			printf("%s\n", contacts[i].telephone_number);
		}
	}
	free(find_name);
	free(contacts);
	//put first_name number which we wanna find:
	//binary search with surname
	//print in console contact
}

void sort(struct Person *Person_cur, struct Person *Person_last){
	char* s1 = (char*)malloc(75);
	char* s2 = (char*)malloc(75);
	s1 = strcat(s1,Person_cur -> first_name);
	s1 = strcat(s1,Person_cur -> second_name);
	s1 = strcat(s1,Person_cur -> surname);

	s2 = strcat(s2,Person_last -> first_name);
        s2 = strcat(s2,Person_last -> second_name);
        s2 = strcat(s2,Person_last -> surname);

	for(int i = 0;i < 122*75;i++){
		if((int)(s1[0])<(int)(s2[0])){
			struct Person* tmp = Person_last;
			Person_last = Person_cur;
			Person_cur = tmp;
		}
		else if((int)(*s1)>(int)(*s2))
			break;
		else{
			s1++;
			s2++;
		}
	}
	free(s1);
	free(s2);
	free(Person_cut);
	free(Person_last);
}

void Choise(enum Action op, char* datafile, struct Person Person, struct Person *contacts, int count){
	switch(op){
                        case ADD:
                                Add(Person, datafile);
				break;
                        case SHOW:
                                Show(datafile);
				break;
                        case FIND:
                                Find(contacts, count);
				break;
                        default:
                                printf("try again\n");
				break;
	}
	free(datafile);
	free(contacts);
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

		Choise(operand, datafile, contacts[i], &contacts, i);

		if(i != 0)
			sort(&contacts[i],  &contacts[i-1]);

		i++;
	}
	return 0;
}
