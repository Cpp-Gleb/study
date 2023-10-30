#include <stdio.h>

void put_for_file(char* mes,char *datafile){
	FILE *fp = fopen(datafile, "w");
	if(fp){
		fputs(mes,fp);
		fclose(fp);
		printf("File has been written\n");
	}

}

void read_in_file(char*buf,char*datafile){
	FILE *fp = fopen(datafile, "r");
	if(fp){
		while((fgets(buf,256,fp)) != NULL){
			printf("%s",buf);
		}
		fclose(fp);
	}

}

int main(){
	char *datafile = "example.txt";
	char buf[256];
	char *mes = "Hello all!\n";
	put_for_file(mes,datafile);
	read_in_file(buf,datafile);
	return 0;
}
