#include <stdio.h>
#include <stdlib.h>
int  get_value(char* buf, char*datafile){
	int i = 1;
	FILE *fp = fopen(datafile, "r");
        if(fp){
                while((fgets(buf,256,fp)) != NULL){
                        if(buf == ' '){
                                i++;
                        }
                }
                fclose(fp);
        }
	return i;
}

char *datafile = "array.txt";
char buf[256];
//int arr[get_value(buf,datafile)]; make dinamic array
int arr[4];
void sort(char*buf,char*datafile){
	for (int i = 0; i < get_value(buf,datafile)-1; i++) {
        	for (int j = 0; j < get_value(buf,datafile)-1 - i; j++) {
            		if (arr[j] > arr[j + 1]) {
                		int temp = arr[j];
                		*(arr +j) = *(arr + j + 1);
                		*(arr + j + 1) = temp;
            		}
        	}
    	}
}

void put_for_file(int* arr ,char *datafile){
        FILE *fp = fopen(datafile, "w");
        if(fp){
                fputs(arr,fp);
                fclose(fp);
                printf("File has been written\n");
        }

}

void read_in_file(char*buf,char*datafile){
	int i = 0;
	char sep[100] = " ";
	char *istr = (char*)malloc(128);
        FILE *fp = fopen(datafile, "r");
	buf = fgets(buf,256,fp);
        if(fp){
		istr = strtok(buf,sep);
		arr[i] = (int)istr;
		while (istr != NULL)
   	 	{
      			istr = strtok (NULL,sep);
			i++;
			arr[i] = (int)istr;
   	 	}
                fclose(fp);
        }

}

int main(){
	read_in_file(buf,datafile);
	sort(buf,datafile);
	put_for_file(arr,datafile);
	return 0;
}

