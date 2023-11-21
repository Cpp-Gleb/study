#include <iostream>
#include <string>

using namespace std;

class Car{
private:
    string _comp;
    string _model;
public:
    Car(string _comp, string _model): _comp(_comp), _model(_model){}
    friend bool operator==  (const Car &c1, const Car &c2);
};

bool operator== (const Car &c1, const Car &c2){
    return (c1._comp == c2._comp && c1._model == c1._model);
}

int main(){
    Car car1("Ford", "Mustang");
    Car car2("KIA", "RIO");
    if(car1 == car2)
        cout << "cars same\n";
    else
        cout << "cars different\n";
    return 0;
}