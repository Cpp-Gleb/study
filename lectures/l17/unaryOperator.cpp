#include <iostream>

class A{
private:
    int _a;
public:
    A(int a = 0): _a(a){}
    int getA() const {
        return _a;
    }
    A operator-() const;
};

A A :: operator- () const{
    return A(-_a);
}

int main(){
    const A a1(7);
    std::cout << (-a1).getA();
    return 0;
}