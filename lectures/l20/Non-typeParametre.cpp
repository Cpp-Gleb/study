#include <iostream>

template <class T, int size>
class StaticArray{
private:
    T _array[size];
public:
    T* getArray();
    T& operator[](int index){
        return _array[index];
    }
};

template <class T, int size>
T* StaticArray<T,size>::getArray() {
    return _array;
}

int main(){
    StaticArray<int, 10> intArray;
    for(int i = 0; i < 10;i++){
        intArray[i] = i;
    }
    for(int i = 9; i > -1; i--){
        std::cout << intArray[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}