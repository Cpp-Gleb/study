#include <stdio.h>

typedef enum{
	NODE_STRING,
	NODE_INT
}Node_type;

typedef union{
	int int_value;
	char* str_value;
}Node_data;

typedef struct{
	Node_type type;
	Node_data data;
}Node;

void print_Node(Node n){
	if(n.type == NODE_STRING){
		printf("String:%s\n",n.data.str_value);
	}
	else if(n.type == NODE_INT){
                printf("Int:%d\n",n.data.int_value);
        }
}

int main(){
	Node n1;
	n1.type = NODE_INT;
	n1.data.int_value = 22;
	Node n2;
	n2.type = NODE_STRING;
	n2.data.str_value = "Hello world!";
	print_Node(n1);
	print_Node(n2);
	return 0;
}
