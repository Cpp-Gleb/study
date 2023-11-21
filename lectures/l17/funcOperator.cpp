#include <iostream>

using namespace  std;

class Accumulator{
private:
    int _counter = 0;
public:
    Accumulator(){}
    int operator()(int i){
        return(_counter += i);
    }
};
int main(){
    Accumulator accum;
    cout << accum(30) << endl;
    cout << accum(40) << endl;
    return 0;
}