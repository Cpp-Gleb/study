#include <stdio.h>

#define LOG_INFO(M,...) printf("[INFO](%s:%d)" M "\n",__FILE__,__LINE__,##__VA_ARGS__)

//предопределенные макросы

int main(int argc, char *argv[]){
	LOG_INFO("Start of program");
	int var = 10;

	LOG_INFO("my variable is %d",var);

	LOG_INFO("End of program");
	return 0;
}
