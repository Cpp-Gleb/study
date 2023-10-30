#include <iostream>

int main(int argc, char* argv[]){
	int *ptr_var;
	int var = 515;
	int secound_var = 2;
	ptr_var= &var;
	std::cout << "косвенное сложение" << *ptr_var + secound_var << std::endl;
	std::cout << "значение var = " << var << std::endl;
	return 0;
}
