#include <iostream>

int main(){
	int var =1;
	int a = 0;

	a = ++var + 1+ ++var*2;

	std::cout << "a = " << a << std::endl;
	return 0;
}
