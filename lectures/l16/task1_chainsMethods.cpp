#include <iostream>

using namespace std;

class Math{
private:
    int _val;
public:
    Math(){
	_val = 0;
    }
    Math& add(int val){
	_val += val;
	return *this;
    }
    Math& sub(int val){
        _val -= val;
        return *this;
    }
    Math& mult(int val){
        _val *= val;
        return *this;
    }
    int getVal(){
	return _val;
    }
};

int  main(){
    Math oper;
    oper.add(7).sub(5).mult(3);
    cout << oper.getVal() << endl;
    return 0;
}
