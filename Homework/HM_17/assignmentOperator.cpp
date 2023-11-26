#include <iostream>

class Counter
{
private:
    int _value;
public:
    Counter(int value):_value(value){}
    void print()  const{
        std::cout << "Value: " << _value << std::endl;
    }
    void setValue(int val){ _value=val;}
};

int main()
{
    Counter c1{25};
    Counter c2 = c1;
    c1.setValue(30);
    c1.print();     // Value: 30
    c2.print();     // Value: 25
}