#include <iostream>

using namespace std;

class IntArray{
private:
    int _array[10];
public:
    int& operator[] (const int index);
};

int& IntArray::operator[](const int index) {
    return _array[index];
}

int main(){
    IntArray array;
    array[4] = 5;
    cout << array[4] << endl
    return 0;
}