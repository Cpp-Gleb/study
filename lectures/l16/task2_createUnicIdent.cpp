#include <iostream>

using namespace std;

class Anything{
private:
	static int s_idGen;
	int _id;
public:
	Anything(){_id = s_idGen++;}
	int getId()const{return _id;}
};


int Anything::s_idGen = 1;

int main(){
	Anything first;
	Anything second;
	Anything third;

	cout << first.getId() << endl;
	cout << second.getId() << endl;
	cout << third.getId() << endl;
	return 0;
}
