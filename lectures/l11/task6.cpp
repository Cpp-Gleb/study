#include <iostream>

int sum(int x, int y);
int main(){
	int a,b;
	std::cout << "Enter 1-st number: " << std::endl;
	std::cin >> a;
	std::cout << "Enter 2-nd number(more than last): " << std::endl;
	std::cin >> b;
	std::cout << sum(b,a) << std::endl;
	return 0;
}
int sum(int x, int y){

	int s = 0;
	if((x - 1) == y)
		s =  x + y;
	else
		s = x + sum((x - 1),y);
	return s;
}
