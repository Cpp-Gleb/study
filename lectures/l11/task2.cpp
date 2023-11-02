#include <iostream>
#include <cmath>
// using namespace std;

int abs(int x){

	std::cout << "(func A)";
	return x>0?x:-x;
}

double  abs(double x){

        std::cout << "(func B)";
        return (1-2*(x<0))*x;
}

char abs(char x){

        std::cout << "(func C)";
        return x>0?x:-x;
}

double abs(double x,double y){

	std::cout << "(func D)";
	return sqrt(x*x+y*y);
}

int main(){

	std::cout << abs(-3) << std::endl;
	std::cout << int(abs(char(-3L))) << std::endl;
	std::cout << abs(-3.0) << std::endl;
	std::cout << abs('0') << std::endl;
	std::cout << abs(3,4) << std::endl;
	return 0;

}
