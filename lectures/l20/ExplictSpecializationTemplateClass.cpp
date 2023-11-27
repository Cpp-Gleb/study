#include <iostream>

template <class T>
class Repository{
private:
    T _array[8];
public:
    void set(int index, const T &value){
        _array[index] = value;
    }

    const T& get(int index){
        return _array[index];
    }
};

int main(){
    Repository<int> intRep;
    for(int i = 0; i < 8; i++){
        intRep.set(i,i);
    }
    for(int i = 0; i < 8; i++){
        std::cout << intRep.get(i) << std::endl;
    }
    Repository<bool> boolRep;
    for(int i = 0; i < 8; i++){
        boolRep.set(i,i % 5);
    }
    for(int i = 0; i < 8; i++){
        std::cout << (boolRep.get(i) ? "true" : "false") << std::endl;
    }
    return 0;
}