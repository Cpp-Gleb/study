#include <iostream>
#include <cassert>

using namespace std;

class Array{
private:
    int* _array;
    int _length;
public:
    Array(int length){
        assert(length > 0);
        _array = new int[length];
        _length = length;
    }

    ~Array(){
        delete [] _array;
    }

    void set_value(int index, int value){
        _array[index] = value;
    }
    int get_value(int index){
        return _array[index];
    }
    int get_length(){
        return _length;
    }
};

int main(){
    Array arr(15);
    for(int i = 0; i < arr.get_length(); i++){
        arr.set_value(i, i+1);
    }
    cout << "value of 7th elem is: " << arr.get_value(7) << endl;
    return 0;
}